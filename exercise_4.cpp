// To find distance, given initial and final velocity and acceleration
#include <iostream>

int main() {

    int u = 4, v = 5, a = 9;

    float distance = (v * v - u * u) / 2 * a;
    std::cout << distance << std::endl;

    return 0;
}