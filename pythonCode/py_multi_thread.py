# from multiprocessing import Pool
from multiprocessing.pool import ThreadPool as Pool
import paramiko
import logging
import sys

if __name__ == "__main__":
    hostname_list = [
        "prod-mpg-cty-001-apu",
        "prod-mpg-cty-002-apu",
        "prod-mpg-cty-003-apu",
        "prod-mpg-cty-004-apu",
        "prod-mpg-cty-005-apu",
    ]


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
            # print(f"Could not connect to {hname}")
            logging.error(f"Could not connect to {hname}")
        except paramiko.ssh_exception.AuthenticationException:
            print(f"Could not connect to {hname}")
            logging.error(f"Could not connect to {hname}")

        if not self.is_connected:
            try:
                self.client.connect(hostname=hname, port=22, username=usr, password=psword)
                self.is_connected = True
                # print(f"connecting to {hname} at port 22")
                logging.info(f"connecting to {hname} at port 22")
            except paramiko.ssh_exception.NoValidConnectionsError:
                # print(f"Could not connect to {hname}")
                logging.error(f"Could not connect to {hname}")
            except paramiko.ssh_exception.AuthenticationException:
                # print(f"Could not connect to {hname}")
                logging.error(f"Could not connect to {hname}")

    def run_cmd(self, cmd):
        if self.is_connected:
            stdin, stdout, stderr = self.client.exec_command(cmd)

            out = stdout.read().decode()
            if out.__len__() != 0:
                logging.info(out)

            err = stderr.read().decode()
            if err.__len__() != 0:
                logging.error(err)

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False


def worker(item):
    try:
        RCR = RemoteCmdRunner()
        print(item)
        RCR.connect_remote_dev(hname=item, usr="cavnue", psword="honor-strong-tripod-boiler-42")
        RCR.run_cmd(cmd="sudo systemctl status ser2net")
        RCR.close_connection()
    except:
        print("could not connect to", item)


if __name__ == "__main__":
    # define worker function before a Pool is instantiated
    pool_size = len(hostname_list)

    logging.basicConfig(filename="pyMultiThread.txt",
                        filemode='w',
                        format='%(asctime)s,%(msecs)d %(name)s %(levelname)s %(message)s',
                        datefmt='%H:%M:%S',
                        level=logging.INFO)

    pool = Pool(1)

    for hname in hostname_list:
        pool.apply_async(worker, (hname,))

    pool.close()
    pool.join()
