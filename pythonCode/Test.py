import paramiko
from time import sleep
import json


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

    def run_cmd(self):
        if self.is_connected:
            stdin, stdout, stderr = self.client.exec_command(
                "sudo sh -c 'cat /var/local/bme680-0-0x76'"
            )

            stdout.channel.recv_exit_status()
            rc = stdout.channel.exit_status
            output = stdout.read().decode()

            assert rc == 0, f"{rc}, rc not requal to 0"
            out = json.loads(output)
            print(out)
            assert out

            ab = {}
            assert ab
            return out

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False
        print()


if __name__ == "__main__":
    hostname_list = [
        "jetson-428b-2",
    ]

    # for x in range(0, 20):
    for hname in hostname_list:
        RCR = RemoteCmdRunner()
        RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
        RCR.run_cmd()
        RCR.close_connection()
