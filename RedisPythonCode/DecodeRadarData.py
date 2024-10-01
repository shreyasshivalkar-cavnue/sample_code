from cavnue.messages.inference.v1 import radar_pb2
import csv


def write_to_file(filename, listname):
    # Write the serialized message to a file
    with open(filename, "w") as f:
        # write elements of list
        for items in listname:
            if items == None:
                continue
            f.write('%s\n' % items)


def write_to_csv(filename, object_lists):
    with open(filename, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Timestamp', 'Acceleration', 'Speed'])
        for object_list in object_lists:
            if object_list is None:
                continue
            observation_ts = object_list.header.ts.ToDatetime().isoformat()
            for obj in object_list.objects:
                writer.writerow([observation_ts, obj.acceleration, obj.speed])


def parseObjectList(payload):
    try:
        objectList = radar_pb2.ObjectList()
        objectList.ParseFromString(payload)
        return objectList
    except Exception as e:
        return


def parseRadarStats(payload):
    try:
        statistics = radar_pb2.RadarStats()
        statistics.ParseFromString(payload)
        return statistics
    except Exception as e:
        return


def parseTargetList(payload):
    try:
        targetlist = radar_pb2.TargetList()
        targetlist.ParseFromString(payload)
        return targetlist
    except Exception as e:
        return


def read_protobufs_from_file():
    # Open the file in binary read mode
    count = 0
    targetlist = []
    statslist = []
    objectlist = []

    with open("radar_data_mpg_cty.bin", "rb") as f:
        while True:
            count = count + 1
            # Read the length of the next serialized message (4 bytes)
            length_bytes = f.read(4)
            if not length_bytes:
                break

            length = int.from_bytes(length_bytes, byteorder='little')

            # Read the serialized message
            serialized_person = f.read(length)
            if len(serialized_person) != length:
                raise IOError("Failed to read the full message")

            # targetlist.append((parseTargetList(serialized_person)))
            # statslist.append((parseRadarStats(serialized_person)))
            objectlist.append((parseObjectList(serialized_person)))

    print(count)

    # write_to_file("targetlist.csv", targetlist)
    # write_to_file("statslist.csv", statslist)
    write_to_csv("objectlist.csv", objectlist)
    write_to_file("objectlist.txt", objectlist)


if __name__ == "__main__":
    read_protobufs_from_file()
