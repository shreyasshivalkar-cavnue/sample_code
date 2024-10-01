import paramiko
from time import sleep
import json
import logging
import sys


class RemoteCmdRunner:
    def __init__(self):
        self.is_connected = False
        self.client = paramiko.SSHClient()
        self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())

    def connect_remote_dev(self, hname, usr, psword):
        try:
            self.client.connect(hostname=hname, port=2222, username=usr, password=psword, timeout=5)
            self.is_connected = True
            # print(f"connecting to {hname} at port 2222")
            logging.info(f"connecting to {hname} at port 2222")
        except paramiko.ssh_exception.NoValidConnectionsError:
            print(f"Could not connect to {hname} at port 2222")
            # logging.error(f"Could not connect to {hname} at port 2222")
        except paramiko.ssh_exception.AuthenticationException:
            print(f"Could not connect to {hname} at port 2222")
            # logging.error(f"Could not connect to {hname} at port 2222")

        if not self.is_connected:
            try:
                self.client.connect(hostname=hname, port=22, username=usr, password=psword)
                self.is_connected = True
                # print(f"connecting to {hname} at port 22")
                logging.info(f"connecting to {hname} at port 22")
            except paramiko.ssh_exception.NoValidConnectionsError:
                print(f"Could not connect to {hname} at port 22")
                # logging.error(f"Could not connect to {hname} at port 22")
            except paramiko.ssh_exception.AuthenticationException:
                print(f"Could not connect to {hname} at port 22")
                # logging.error(f"Could not connect to {hname} at port 22")

    def run_cmd(self, cmd):
        if self.is_connected:
            stdin, stdout, stderr = self.client.exec_command(cmd)

            out = stdout.read().decode()
            if out.__len__() != 0:
                logging.info(out)
            # err = stderr.read().decode()
            # if err.__len__() != 0:
            #     logging.error(err)

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False
        # print()


if __name__ == "__main__":
    hostname_list = [
        # "jetson-0793",
        # "jetson-0d6f-44",
        # "jetson-3651-1",
        # "jetson-3cd7-3",
        # "jetson-4191-1",
        # "jetson-428b-1",
        # "jetson-4493-1",
        # "jetson-44f7-1",
        # "jetson-4709-19",
        # "jetson-4817-1",
        # "jetson-4867-1",
        # "jetson-48e9-1",
        # "jetson-49b1-1",
        # "jetson-5d43",
        # "jetson-65bd-3",
        # "jetson-6cd9-2",
        # "jetson-6eeb-5",
        # "jetson-6f59-13",
        # "jetson-72b5-1",
        # "jetson-802f-3",
        # "jetson-8147-1",
        # "jetson-84c1-9",
        # "jetson-854d-4",
        # "jetson-8b83",
        # "jetson-8c41-4",
        # "jetson-964b-6",
        # "jetson-a0f6-2",
        # "jetson-a22b-2",
        # "jetson-a52e-8",
        # "jetson-b082-3",
        # "jetson-cd69-1",
        # "jetson-d70f-10",
        # "jetson-e1dd",
        # "jetson-e4c5-3",
        # "jetson-f749-3",
        # "jetson-f88f-4",

        "jetson-0d6f-44",
        "jetson-3737-3",
        "jetson-374b-6",
        "jetson-41c3-1",
        "jetson-428b-1",
        "jetson-430d-1",
        "jetson-4493-1",
        "jetson-4605-3",
        "jetson-4709-19",
        "jetson-4885-1",
        "jetson-4907-6",
        "jetson-492f-1",
        "jetson-5d43-1",
        "jetson-65c7-5",
        "jetson-6761-5",
        "jetson-6eeb-5",
        "jetson-6f59-13",
        "jetson-71d9-2",
        "jetson-7e63-3",
        "jetson-8147-1",
        "jetson-84c1-9",
        "jetson-854d-4",
        "jetson-89cb-2",
        "jetson-8b51",
        "jetson-8b83",
        "jetson-8c41-4",
        "jetson-964b-6",
        "jetson-9907-2",
        "jetson-a52e-8",
        "jetson-b082-3",
        "jetson-c1ed-1",
        "jetson-cd69-1",
        "jetson-d70f-10",
        "jetson-e1dd",
        "jetson-f749-3",
    ]

    logging.basicConfig(filename="extlinux_conf",
                        filemode='a',
                        format='%(asctime)s,%(msecs)d %(name)s %(levelname)s %(message)s',
                        datefmt='%H:%M:%S',
                        level=logging.INFO)

    for hname in hostname_list:
        RCR = RemoteCmdRunner()
        try:
            RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
            RCR.run_cmd(cmd="cat /etc/cavnue/build.info")
            RCR.run_cmd(cmd="cat /boot/extlinux/extlinux.conf")
            RCR.close_connection()
        except TimeoutError:
            print("could not connect to", hname)
