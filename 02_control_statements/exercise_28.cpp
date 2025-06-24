// Display digits of a number in reverse

#include <iostream>
#include <string>

int main() {
    int num;
    int reversed = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Method - 1
    while(num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    std::cout << "Reversed number: " << reversed << std::endl;

    // Method - 2
    std::string str = std::to_string(num);

    for(int i = str.length() - 1; i >= 0; --i) {
        std::cout << str[i];
    }

    return 0;
}