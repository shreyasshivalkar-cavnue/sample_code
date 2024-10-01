def test(state, relative_humidity_percent, current_time):
    print(f"input: {state}, {relative_humidity_percent}, {current_time}")
    REL_HUMIDITY_THRESHOLD = 50
    TURN_ON_TIME_HR = 3
    TURN_OFF_TIME_HR = 13

    if state == "OFF":
        if (
            relative_humidity_percent > REL_HUMIDITY_THRESHOLD
            and current_time >= TURN_ON_TIME_HR
            and current_time < (TURN_OFF_TIME_HR-1)
        ):
            state = "ON"
            print(
                f"\tnew state: {state}, RH: {relative_humidity_percent}, Time: {current_time}"
            )

    elif state == "ON":
        if (
            current_time < TURN_ON_TIME_HR
                            or current_time > (TURN_OFF_TIME_HR-1)
        ):
            state = "OFF"
            print(f"\tnew state: {state}, Time: {current_time}")

if __name__ == "__main__":
    test(state="OFF", relative_humidity_percent=55, current_time=3)
    test(state="OFF", relative_humidity_percent=55, current_time=13)
    test(state="OFF", relative_humidity_percent=45, current_time=3)
    test(state="OFF", relative_humidity_percent=45, current_time=13)


    test(state="ON", relative_humidity_percent=55, current_time=3)
    test(state="ON", relative_humidity_percent=55, current_time=13)
    test(state="ON", relative_humidity_percent=45, current_time=3)
    test(state="ON", relative_humidity_percent=45, current_time=13)