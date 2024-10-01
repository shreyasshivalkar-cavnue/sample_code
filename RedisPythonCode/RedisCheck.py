from google.protobuf.json_format import MessageToJson
import json
from redis import Redis
import argparse

redis_port = 6379

# redis_host = "redis://default:8773a5f2-1732-47d1-b4f0-967d6e6040fb@eventbusredisforwarder.live.prod.mpgcty.cavnue.io:6379/?family=6"
# redis_host = 'eventbusredisforwarder.live.prod.mpgcty.cavnue.io'
# redis_host = "10.68.0.52"
redis_host = "10.71.3.3"
redis_auth = '8773a5f2-1732-47d1-b4f0-967d6e6040fb'

# redis_host = "durango-vm-u22"
# redis_auth = 'FutureRoads'


def run():
    RedisClient = Redis(host=redis_host, port=redis_port, username="default",
                        password=redis_auth, socket_connect_timeout=30)
    try:
        RedisClient.ping()
        print('connected to redis "{}"'.format(redis_host))
    except Exception as e:
        print(f"failed to connect to redis server, {e}")

    fileHangle = open("radar_data_mpg_cty.bin", "wb")

    # "inference:radar-uct-list:2.0",
    stream_key = ["inference:radar-object-list:2.0",
                  "inference:radar-stats-list:2.0", "inference:radar-target-list:2.0"]
    last_id = b"0-0"                   # last defined value

    for key in stream_key:
        streamXRead = RedisClient.xread({key: last_id}, block=100)
        count = 0

        if streamXRead:
            first_stream = streamXRead[0]
            print(f"got data from stream: {first_stream[0]}")
            fs_data = first_stream[1]

            firsttime = False

            for id, value in fs_data:
                count = count + 1

                payload = value[b'payload']

                # Write the length of the serialized message as a 4-byte integer
                fileHangle.write(len(payload).to_bytes(4, byteorder='little'))

                # Write the serialized message
                fileHangle.write(payload)

                if firsttime:
                    print(f"id: {id}, payload: {payload}")
                    firsttime = False
        else:
            print(f"Empty response for {key}")
    print(f"count:{count}")
    fileHangle.close()


if __name__ == '__main__':

    run()
