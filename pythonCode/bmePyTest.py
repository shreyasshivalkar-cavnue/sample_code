import pytest


@pytest.fixture(scope="module")
def bme680_data():
    readings = {"temperature": 30.5827, "humidity": 19.9987, "pressure": 102195, "timestamp": 1702070412.852052}
    return readings


def test_temp(bme680_data):
    assert -40 <= bme680_data["temperature"] <= 85


def test_humidity(bme680_data):
    assert 0 <= bme680_data["humidity"] <= 100


def test_pressure(bme680_data):
    assert 100000 <= bme680_data["pressure"] <= 120000
