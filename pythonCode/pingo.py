# from multiprocessing import Pool
from multiprocessing.pool import ThreadPool as Pool
import paramiko
import logging
import sys


class RemoteCmdRunner:
    def __init__(self):
        self.is_connected = False
        self.client = paramiko.SSHClient()
        self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())

    def connect_remote_dev(self, hname, usr, psword):
        self.hname = hname
        dev_port = [2222, 22]
        for port in dev_port:
            try:
                self.client.connect(hostname=self.hname, port=2222, username=usr, password=psword, timeout=20)
                self.is_connected = True
                logging.info(f"Connected to {self.hname} at port {port} Successfully!!!")
                break
            except Exception as e:
                logging.error(f"Could not connect to {self.hname} at port {port} {e}")

    def run_cmd(self, cmd):
        if self.is_connected:
            stdin, stdout, stderr = self.client.exec_command(cmd)

            out = stdout.read().decode()
            if out.__len__() != 0:
                logging.info(f"{self.hname}, {out}")

    def close_connection(self):
        if self.is_connected:
            self.client.close()
            self.is_connected = False


hostname_list = [
    # "prod-i94m-mm1880-apu",
    # "prod-i94m-mm1882-apu",
    # "prod-i94m-mm1883-apu",
    # "prod-i94m-mm1884-apu",
    # "prod-i94m-mm1886-apu",
    # "prod-i94m-mm1887-apu",
    # "prod-i94m-mm1888-apu",
    # "prod-i94m-mm1889-apu",
    # "prod-i94m-mm1890-apu",
    # "prod-i94m-mm1892-apu",
    # "prod-i94m-mm1893-apu",
    # "prod-i94m-mm1894-apu",
    # "prod-i94m-mm1896-apu",
    # "prod-i94m-mm1897-apu",
    # "prod-i94m-mm1898-apu",
    # "prod-i94m-mm1899-apu",
    # "prod-i94m-mm1900-apu",
    # "prod-i94m-mm1901-apu",
    # "prod-i94m-mm1903-apu",
    # "prod-i94m-mm1904-apu",
    # "prod-i94m-mm1905-apu",
    # "prod-i94m-mm1906-apu",
    # "prod-i94m-mm1908-apu",
    # "prod-i94m-mm1909-apu",
    # "prod-i94m-mm1910-apu",
    # "prod-i94m-mm1911-apu",
    # "prod-i94m-mm1913-apu",

    "prod-i94m-mm1880-cam-1",
    "prod-i94m-mm1882-cam-1",
    "prod-i94m-mm1883-cam-1",
    "prod-i94m-mm1884-cam-1",
    "prod-i94m-mm1886-cam-1",
    "prod-i94m-mm1887-cam-1",
    "prod-i94m-mm1888-cam-1",
    "prod-i94m-mm1889-cam-1",
    "prod-i94m-mm1890-cam-1",
    "prod-i94m-mm1892-cam-1",
    "prod-i94m-mm1893-cam-1",
    "prod-i94m-mm1894-cam-1",
    "prod-i94m-mm1896-cam-1",
    "prod-i94m-mm1897-cam-1",
    "prod-i94m-mm1898-cam-1",
    "prod-i94m-mm1899-cam-1",
    "prod-i94m-mm1900-cam-1",
    "prod-i94m-mm1901-cam-1",
    "prod-i94m-mm1903-cam-1",
    "prod-i94m-mm1904-cam-1",
    "prod-i94m-mm1905-cam-1",
    "prod-i94m-mm1906-cam-1",
    "prod-i94m-mm1908-cam-1",
    "prod-i94m-mm1909-cam-1",
    "prod-i94m-mm1910-cam-1",
    "prod-i94m-mm1911-cam-1",
    "prod-i94m-mm1913-cam-1",
    "prod-i94m-mm1880-cam-2",
    "prod-i94m-mm1882-cam-2",
    "prod-i94m-mm1883-cam-2",
    "prod-i94m-mm1884-cam-2",
    "prod-i94m-mm1886-cam-2",
    "prod-i94m-mm1887-cam-2",
    "prod-i94m-mm1888-cam-2",
    "prod-i94m-mm1889-cam-2",
    "prod-i94m-mm1890-cam-2",
    "prod-i94m-mm1892-cam-2",
    "prod-i94m-mm1893-cam-2",
    "prod-i94m-mm1894-cam-2",
    "prod-i94m-mm1896-cam-2",
    "prod-i94m-mm1897-cam-2",
    "prod-i94m-mm1898-cam-2",
    "prod-i94m-mm1899-cam-2",
    "prod-i94m-mm1900-cam-2",
    "prod-i94m-mm1901-cam-2",
    "prod-i94m-mm1903-cam-2",
    "prod-i94m-mm1904-cam-2",
    "prod-i94m-mm1905-cam-2",
    "prod-i94m-mm1906-cam-2",
    "prod-i94m-mm1908-cam-2",
    "prod-i94m-mm1909-cam-2",
    "prod-i94m-mm1910-cam-2",
    "prod-i94m-mm1911-cam-2",
    "prod-i94m-mm1913-cam-2",
]


def connectDev(start):
    NUM_DEVS = 9
    for i in range(start, start+NUM_DEVS):
        RCR = RemoteCmdRunner()
        RCR.connect_remote_dev(hname=hostname_list[i], usr="cavnue", psword="honor-strong-tripod-boiler-42")
        RCR.run_cmd(cmd="sudo apt search metrics-to-cloud")
        RCR.close_connection()


if __name__ == "__main__":
    NUM_WOKERS = 9
    num_devices = len(hostname_list)

    logging.basicConfig(filename="cam-chc-status-May-17th.txt",
                        filemode='a',
                        format='%(asctime)s,%(msecs)d %(name)s %(levelname)s %(message)s',
                        datefmt='%H:%M:%S',
                        level=logging.INFO)

    logging.getLogger("paramiko").setLevel(logging.WARNING)

    pool = Pool(NUM_WOKERS)
    pool.map(connectDev, range(0, num_devices, NUM_WOKERS))
    pool.close()
    pool.join()
