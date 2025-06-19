// To find the distance between two points
#include <iostream>
#include <cmath>

int main() {
    int x1 = 0, y1 = 0, x2 = 5, y2 = 10;

    float dist = std::sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    std::cout << dist << std::endl;

    return 0;
}