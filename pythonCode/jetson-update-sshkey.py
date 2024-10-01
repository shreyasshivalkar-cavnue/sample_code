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
            self.client.connect(hostname=hname, port=22, username=usr, password=psword)
            self.is_connected = True
            print(f"connecting to {hname} at port 22")
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
            sleep(0.1)

            out = stdout.read().decode()
            print(out)
            err = stderr.read().decode()
            print(err)

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False
        print()


if __name__ == "__main__":
    hostname_list = [
        "100.111.192.117",
    ]

    for hname in hostname_list:
        RCR = RemoteCmdRunner()
        RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
        RCR.run_cmd("sudo cavnue-update-package-cache && sudo apt update && sudo apt install cavnue-ssh-pubkeys")
        RCR.close_connection()
