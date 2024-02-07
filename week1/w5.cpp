#include <iostream>
#include <cmath>
#include <iomanip>

const double EARTH_RADIUS = 6371.0; // Earth radius in kilometers

double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}

double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    lat1 = toRadians(lat1);
    lon1 = toRadians(lon1);
    lat2 = toRadians(lat2);
    lon2 = toRadians(lon2);

    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = sin(dlat / 2) * sin(dlat / 2) + cos(lat1) * cos(lat2) * sin(dlon / 2) * sin(dlon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return EARTH_RADIUS * c;
}

int main() {
    double lat1, lon1, lat2, lon2;

    // Input coordinate
    std::cout << "Input the latitude of coordinate 1: ";
    std::cin >> lat1;
    std::cout << "Input the longitude of coordinate 1: ";
    std::cin >> lon1;
    std::cout << "Input the latitude of coordinate 2: ";
    std::cin >> lat2;
    std::cout << "Input the longitude of coordinate 2: ";
    std::cin >> lon2;

    // Calculate and display the distance
    double distance = calculateDistance(lat1, lon1, lat2, lon2);
    std::cout << "The distance between those points is: " << std::fixed << std::setprecision(2) << distance << " kilometers" << std::endl;

    return 0;
}
