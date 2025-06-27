#include <iostream>
#include <string>

int main() {
    std::string str = "WELCOME";

    std::string::iterator i;
    for(i = str.begin(); i != str.end(); i++){
        std::cout << static_cast<char>(*i + 32);
    }
    std::cout << std::endl;
    
    return 0;
}