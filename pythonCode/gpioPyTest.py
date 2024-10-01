import paramiko
import pytest


class SshClientHandler:
    def __init__(self):
        self.client = paramiko.SSHClient()
        self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
        self.client.connect(
            hostname="jetson-428b-1", port=2222, username="cavnue", password="honor-strong-tripod-boiler-42"
        )

    def run(self, cmd):
        stdin, stdout, stderr = self.client.exec_command(cmd)

        stdout.channel.recv_exit_status()
        rc = stdout.channel.exit_status
        out = stdout.read().decode()

        if rc != 0:
            print(f'Non-zero return for command:"{cmd}", rc:"{rc}"')
            print(f"Stderr: {stderr.read().decode()}")
            print(f"Stdout: {out}")

        return rc, out

    def __del__(self):
        self.client.close()
        print("Destructor called, Employee deleted.")


def test_export_gpio():
    sshClientHandle = SshClientHandler()

    rc, out = sshClientHandle.run("echo PBB.00 | sudo tee /sys/class/gpio/export")
    print(rc)
    print(out)

    assert rc == 0


def test_read_direction():
    sshClientHandle = SshClientHandler()
    rc, out = sshClientHandle.run("sudo cat /sys/class/gpio/PBB.00/direction")
    print(rc)
    print(out)

    assert rc == 0


def test_read_value():
    sshClientHandle = SshClientHandler()
    rc, out = sshClientHandle.run("sudo cat /sys/class/gpio/PBB.00/value")
    print(rc)
    print(out)

    assert rc == 0


def test_unexport_gpio():
    sshClientHandle = SshClientHandler()
    rc, out = sshClientHandle.run("echo PBB.00 | sudo tee /sys/class/gpio/unexport")
    print(rc)
    print(out)

    assert rc == 0
