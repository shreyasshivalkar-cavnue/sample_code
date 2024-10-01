import math


def geodetic_to_ecef(lat, lon, alt):
    # Constants for the WGS84 ellipsoid
    a = 6378137.0  # Semi-major axis (meters)
    f = 1 / 298.257223563  # Flattening
    b = a * (1 - f)  # Semi-minor axis
    e_sq = 1 - (b / a) ** 2  # Square of first eccentricity

    # Convert degrees to radians
    lat_rad = math.radians(lat)
    lon_rad = math.radians(lon)

    # Calculate prime vertical radius of curvature
    N = a / math.sqrt(1 - e_sq * math.sin(lat_rad) ** 2)

    # Calculate ECEF coordinates
    X = (N + alt) * math.cos(lat_rad) * math.cos(lon_rad)
    Y = (N + alt) * math.cos(lat_rad) * math.sin(lon_rad)
    Z = ((b ** 2 / a ** 2) * N + alt) * math.sin(lat_rad)

    return X, Y, Z


# Example usage
latitude = 42.8521019721123  # degrees
longitude = -83.0477910116315  # degrees
altitude = 277.62  # meters

X, Y, Z = geodetic_to_ecef(latitude, longitude, altitude)
print(f"ECEF Coordinates:\nX: {X}\nY: {Y}\nZ: {Z}")
