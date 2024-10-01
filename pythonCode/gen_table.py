def get_current(self_reading, a, b):
    VREF = 3.0
    MAX_RANGE = 1_024
    # a, b = 50, 0.01
    # a, b = 200, 12_000
    # Forge/Orin current = ((ADC Count/1024)*3)/50)*0.01
    # return (((self_reading / MAX_RANGE) * VREF) / a) * b
    # forge_current_amps = ((adc_readout / 1024) * 3) / 50 / 0.01
    return (((self_reading / MAX_RANGE) * VREF) / a) / b


if __name__ == "__main__":
    a, b = 50, 0.01
    print(f"Scaling factors: a:{a}, b: {b}")
    for x in range(0, 1025, 16):
        print(f"{x},{get_current(x, a, b)}")
