#include <iostream>

int main() {

    char s[20];
    std::cout << "Enter your name: ";
    std::cin >> s; // this takes only first word before space
    std::cin.get(s, 20); // to get input with spaces, like "sai kelkar"
    std::cin.getline(s, 100); // works similarly to .get()
    // if multiple .get() are used, only first get's executed, rest are ignored
    // if multiple .getline() are used, all of them get executed properly

    std::cout << "Welcome " << s << std::endl;

    return 0;
}