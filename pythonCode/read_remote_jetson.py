import paramiko
from time import sleep


def get_current(self_reading):
    VREF = 3.0
    MAX_RANGE = 1_024
    a, b = 50, 0.01
    # a, b = 200, 12_000
    # Forge/Orin current = ((ADC Count/1024)*3)/50)*0.01
    return (((self_reading / MAX_RANGE) * VREF) / a) / b


class RemoteCmdRunner:
    def __init__(self):
        self.is_connected = False
        self.client = paramiko.SSHClient()
        self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())

    def connect_remote_dev(self, hname, usr, psword):
        try:
            self.client.connect(hostname=hname, port=2222, username=usr, password=psword)
            self.is_connected = True
            print(f"connecting to {hname} at port 2222")
        except paramiko.ssh_exception.NoValidConnectionsError:
            print(f"Could not connect to {hname}")
        except paramiko.ssh_exception.AuthenticationException:
            print(f"Could not connect to {hname}")

        if not self.is_connected:
            try:
                self.client.connect(hostname=hname, port=22, username=usr, password=psword)
                self.is_connected = True
                print(f"connecting to {hname} at port 22")
            except paramiko.ssh_exception.NoValidConnectionsError:
                print(f"Could not connect to {hname}")
            except paramiko.ssh_exception.AuthenticationException:
                print(f"Could not connect to {hname}")

    def run_cmd(self):
        if self.is_connected:
            stdin, stdout, stderr = self.client.exec_command(
                "sudo sh -c 'cat /sys/bus/iio/devices/iio\:device1/in_voltage4_raw'"
            )
            sleep(0.5)

            for line in stdout:
                l = line.strip("\n")
                print(f"raw: {l}")
                print(f"current: {get_current(int(l))}")

            for line in stderr:
                print(line.strip("\n"))

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False
        print()


if __name__ == "__main__":
    hostname_list = [
        "jetson-428b-9",
        # "jetson-0005",
        # "jetson-0761-5",
        # "jetson-1eef",
        # "jetson-31fb",
        # "jetson-3d95-5",
        # "jetson-6eeb",
        # "jetson-6f59-12",
        # "jetson-84c1-1",
        # "jetson-8da9",
        # "jetson-97db",
        # "jetson-a52e-5",
        # "jetson-c1ed-1",
        # "jetson-d60b",
        # "jetson-e1dd-61",
        # "jetson-e877-3",
    ]

    for x in range(0, 20):
        for hname in hostname_list:
            RCR = RemoteCmdRunner()
            RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
            RCR.run_cmd()
            RCR.close_connection()
