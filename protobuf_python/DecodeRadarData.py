from pyclbr import Class
from sympy import false
from cavnue.messages.inference.v1 import radar_pb2
import re
from datetime import datetime
from google.protobuf import message
import csv

target_list = []
object_list = []
stats_list = []


def write_protobuf_to_csv(protobuf_messages, csv_file_path):
    # Check if the list is not empty
    if not protobuf_messages:
        print("No messages to write.")
        return

    # Open the CSV file for writing
    with open(csv_file_path, mode='w', newline='') as csvfile:
        # Get the field names from the first Protobuf message (assuming all messages have the same structure)
        field_names = [field.name for field in protobuf_messages[0].DESCRIPTOR.fields]

        # Create a CSV DictWriter object
        writer = csv.DictWriter(csvfile, fieldnames=field_names)

        # Write the header (field names)
        writer.writeheader()
        firsttime = True

        # Write the Protobuf messages to CSV
        for message in protobuf_messages:
            print(message)
            # Convert each Protobuf message to a dictionary
            message_dict = {}
            for field in message.DESCRIPTOR.fields:
                field_name = field.name
                if firsttime:
                    print(field_name)
                message_dict[field_name] = getattr(message, field_name)
            firsttime = False

            # Write the message as a row in the CSV file
            writer.writerow(message_dict)


def parse_log_line(line):
    # Regex to match the log format
    log_pattern = re.compile(r"(\d{4}-\d{2}-\d{2}) (\d{2}:\d{2}:\d{2}) - (\S+) - b'(.+)'")
    match = log_pattern.match(line)

    if match:
        date_str, time_str, mqtt_topic, protobuf_msg = match.groups()
        date_time = datetime.strptime(f"{date_str} {time_str}", "%Y-%m-%d %H:%M:%S")

        # Decode the protobuf message
        protobuf_bytes_temp = bytes(protobuf_msg.encode('latin1'))  # Convert to bytes
        protobuf_bytes = protobuf_bytes_temp.decode('unicode_escape').encode("raw_unicode_escape")

        if mqtt_topic == "targetlist-0":
            try:
                decoded_message = radar_pb2.TargetList.FromString(protobuf_bytes)
            except message.DecodeError:
                print(f"Failed to decode Protobuf message:{mqtt_topic}")
            target_list.append(decoded_message)

        elif mqtt_topic == "objectlist-0":
            try:
                decoded_message = radar_pb2.ObjectList.FromString(protobuf_bytes)
            except message.DecodeError:
                print(f"Failed to decode Protobuf message:{mqtt_topic}")
            # write_to_file("objectlist.txt", decoded_message)
            object_list.append(decoded_message)

        elif mqtt_topic == "statistics-0":
            try:
                decoded_message = radar_pb2.RadarStats.FromString(protobuf_bytes)
            except message.DecodeError:
                print(f"Failed to decode Protobuf message:{mqtt_topic}")
            # write_to_file("statslist.txt", decoded_message)
            stats_list.append(decoded_message)

# Function to parse the entire log file


def parse_log_file(file_path):
    # parsed_entries = []

    with open(file_path, 'r') as file:
        for line in file:
            parse_log_line(line)
            # parsed_entry =
            # if parsed_entry:
            #     parsed_entries.append(parsed_entry)

    # return parsed_entries


if __name__ == "__main__":
    log_file_path = 'mqtt_messages.log'
    parse_log_file(log_file_path)

    write_protobuf_to_csv(object_list, "object_list.csv")
