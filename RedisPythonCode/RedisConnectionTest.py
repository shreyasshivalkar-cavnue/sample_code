from redis import Redis

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


if __name__ == '__main__':

    run()
