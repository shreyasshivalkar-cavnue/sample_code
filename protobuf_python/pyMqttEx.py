# python 3.11

import random
from paho.mqtt import client as mqtt_client

from cavnue.messages.inference.v1 import radar_pb2

broker = 'durango-vm-u22'
port = 1883
topic1 = "objectlist-0"
topic2 = "statistics-0"
topic3 = "targetlist-0"
topic = [("objectlist-0", 0), ("statistics-0", 0), ("targetlist-0", 0)]
# Generate a Client ID with the subscribe prefix.
client_id = f'subscribe-{random.randint(0, 100)}'
username = 'cavnue'
password = 'cavnue144'


def write_to_file(payload):
    f = open("mqttdata.txt", "a")
    f.write(f"{payload}")
    f.close()


def on_message(client, userdata, msg):
    if msg.topic == topic1:
        objectList = radar_pb2.ObjectList()
        objectList.ParseFromString(msg.payload)
        write_to_file(objectList)

    elif msg.topic == topic2:
        statistics = radar_pb2.RadarStats()
        statistics.ParseFromString(msg.payload)
        write_to_file(statistics)

    elif msg.topic == topic3:
        targetlist = radar_pb2.TargetList()
        targetlist.ParseFromString(msg.payload)
        write_to_file(targetlist)


def connect_mqtt() -> mqtt_client:
    def on_connect(client, userdata, flags, rc):
        if rc == 0:
            print("Connected to MQTT Broker!")
        else:
            print("Failed to connect, return code %d\n", rc)

    client = mqtt_client.Client(mqtt_client.CallbackAPIVersion.VERSION1, client_id)
    client.username_pw_set(username, password)
    client.on_connect = on_connect
    client.connect(broker, port)
    return client


def subscribe(client: mqtt_client):
    client.subscribe(topic)
    client.on_message = on_message


def run():
    client = connect_mqtt()
    subscribe(client)
    client.loop_forever()


if __name__ == '__main__':
    run()
