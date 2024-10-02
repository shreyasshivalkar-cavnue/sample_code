import paho.mqtt.client as mqtt
import logging
from datetime import datetime

# Configuration
BROKER_ADDRESS = "127.0.0.1"
BROKER_PORT = 1883
TOPICS = ["objectlist-0", "statistics-0", "targetlist-0"]
LOG_FILE = "mqtt_messages.log"
username = 'cavnue'
password = 'cavnue144'

# Setup logging
logging.basicConfig(
    filename=LOG_FILE,
    level=logging.INFO,
    format='%(asctime)s - %(topic)s - %(message)s',
    datefmt='%Y-%m-%d %H:%M:%S'
)

# Callback when the client connects to the broker


def on_connect(client, userdata, flags, rc):
    if rc == 0:
        print("Connected successfully")
        for topic in TOPICS:
            client.subscribe(topic)
            print(f"Subscribed to topic: {topic}")
    else:
        print(f"Connect failed with code {rc}")

# Callback when a message is received


def on_message(client, userdata, msg):
    message = msg.payload.decode('utf-8')
    logging.info(f"{message}", extra={'topic': msg.topic})
    print(f"Message received: Topic={msg.topic}, Message={message}")

# Main function to connect to the broker and start the loop


def main():
    client = mqtt.Client()

    # Assign event callbacks
    client.username_pw_set(username, password)
    client.on_connect = on_connect
    client.on_message = on_message

    # Connect to the broker
    client.connect(BROKER_ADDRESS, BROKER_PORT, 60)

    # Start the MQTT client loop
    client.loop_forever()


if __name__ == "__main__":
    main()
