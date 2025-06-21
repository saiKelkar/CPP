// Display grades for students marks
#include <iostream>

int main() {
    float scores;
    std::cout << "Enter scores: ";
    std::cin >> scores;

    if (scores > 10 && scores < 100) {
        if (scores >= 60) {
            std::cout << "Grade A" << std::endl;
        }
        else if (scores < 60 && scores >= 35) {
            std::cout << "Grade B" << std::endl;
        }
        else {
            std::cout << "Geade C" << std::endl;
        }
    }
    return 0;
}