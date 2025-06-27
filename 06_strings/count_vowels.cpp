#include <iostream>
#include <string>

int main() {
    std::string str = "WELCOME";
    std::string vowels = "AEIOU";
    int num_vowels = 0;

    std::string::iterator i;
    for(i = str.begin(); i != str.end(); i++) {
        // std::string::npos -- special c++ constant -- represents "not found" when searching inside a string
        if(vowels.find(*i) != std::string::npos) {
            num_vowels++;
        }
    }
    std::cout << num_vowels << std::endl;
    
    return 0;
}