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
            self.client.connect(hostname=hname, port=2222, username=usr, password=psword, timeout=5)
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

    def run_cmd(self, cmd):
        if self.is_connected:
            stdin, stdout, stderr = self.client.exec_command(cmd)

            out = stdout.read()
            print(out)

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False
        print()


if __name__ == "__main__":
    hostname_list = [
        # "prod-i94m-mm1913-cam-1",
        # "prod-i94m-mm1913-cam-2",
        # "prod-i94m-mm1911-cam-1",
        # "prod-i94m-mm1911-cam-2",
        # "prod-i94m-mm1910-cam-1",
        # "prod-i94m-mm1910-cam-2",
        # "prod-i94m-mm1909-cam-1",
        # "prod-i94m-mm1909-cam-2",
        # "prod-i94m-mm1908-cam-1",
        # "prod-i94m-mm1908-cam-2",
        # "prod-i94m-mm1906-cam-1",
        # "prod-i94m-mm1906-cam-2",
        # "prod-i94m-mm1905-cam-1",
        # "prod-i94m-mm1905-cam-2",
        # "prod-i94m-mm1904-cam-1",

        # eeprom issue
        "prod-i94m-mm1904-cam-2",

        # "prod-i94m-mm1903-cam-1",
        # "prod-i94m-mm1903-cam-2",
        # "prod-i94m-mm1901-cam-1",
        # "prod-i94m-mm1901-cam-2",
        # "prod-i94m-mm1900-cam-1",
        # "prod-i94m-mm1900-cam-2",
        # "prod-i94m-mm1899-cam-1",
        # "prod-i94m-mm1899-cam-2",
        # "prod-i94m-mm1898-cam-1",
        # "prod-i94m-mm1898-cam-2",
        # "prod-i94m-mm1897-cam-1",
        # "prod-i94m-mm1897-cam-2",
        # "prod-i94m-mm1896-cam-1",
        # "prod-i94m-mm1896-cam-2",
        # "prod-i94m-mm1894-cam-1",
        # "prod-i94m-mm1894-cam-2",
        # "prod-i94m-mm1893-cam-1",
        # "prod-i94m-mm1893-cam-2",
        # "prod-i94m-mm1892-cam-1",
        # "prod-i94m-mm1892-cam-2",
        # "prod-i94m-mm1890-cam-1",
        # "prod-i94m-mm1890-cam-2",
        # "prod-i94m-mm1889-cam-1",
        # "prod-i94m-mm1889-cam-2",
        # "prod-i94m-mm1888-cam-1",
        # "prod-i94m-mm1888-cam-2",
        # "prod-i94m-mm1887-cam-1",
        # "prod-i94m-mm1887-cam-2",
        # "prod-i94m-mm1886-cam-1",
        # "prod-i94m-mm1886-cam-2",
        # "prod-i94m-mm1884-cam-1",
        # "prod-i94m-mm1884-cam-2",
        # "prod-i94m-mm1883-cam-1",

        # disappeared after a week
        "prod-i94m-mm1883-cam-2",

        # offline
        "prod-i94m-mm1882-cam-1",
        "prod-i94m-mm1882-cam-2",
        "prod-i94m-mm1880-cam-1",
        "prod-i94m-mm1880-cam-2",
    ]

    for hname in hostname_list:
        RCR = RemoteCmdRunner()
        try:
            RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
            RCR.run_cmd(cmd="sudo cat /sys/bus/i2c/devices/0-0052/eeprom")
            RCR.close_connection()
        except TimeoutError:
            print("could not connect to", hname)
