#include <iostream>
#include <string>

int main() {
    std::string str = "MADAM";
    bool is_palindrome = true;
    
    std::string::iterator i = str.begin();
    std::string::reverse_iterator j = str.rbegin();

    for(int x = 0; x < str.length() / 2; ++x) {
        if(*i != *j) {
            is_palindrome = false;
            break;
        }
        ++i;
        ++j;
    }
    if(is_palindrome) {
        std::cout << str << " is a palindrome" << std::endl;
    }
    else{
        std::cout << str << " is not a palindrome" << std::endl;
    }
    
    return 0;
}