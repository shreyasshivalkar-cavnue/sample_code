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
        "prod-mpg-cty-001-cam-1",
        "prod-mpg-cty-001-cam-2",
        "prod-mpg-cty-002-cam-1",
        "prod-mpg-cty-002-cam-2",
        "prod-mpg-cty-003-cam-1",
        "prod-mpg-cty-003-cam-2",
        "prod-mpg-cty-004-cam-1",
        "prod-mpg-cty-004-cam-2",
        "prod-mpg-cty-005-cam-1",

    ]

    logging.basicConfig(filename="mgctystatus.txt",
                        filemode='a',
                        format='%(asctime)s,%(msecs)d %(name)s %(levelname)s %(message)s',
                        datefmt='%H:%M:%S',
                        level=logging.INFO)

    for hname in hostname_list:
        RCR = RemoteCmdRunner()
        # try:
        #     RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
        #     RCR.run_cmd(cmd="cat /etc/cavnue/build.info")
        #     RCR.close_connection()
        # except TimeoutError:
        #     print("could not connect to", hname)

        try:
            RCR.connect_remote_dev(hname=hname, usr="cavnue", psword="honor-strong-tripod-boiler-42")
            RCR.run_cmd(cmd="uname -a")
            RCR.close_connection()
        except TimeoutError:
            print("could not connect to", hname)
