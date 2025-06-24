#include <iostream>

int main() {
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
 
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) {
            if(j >= i) {
                std::cout << "* ";
            }
            if(j < i){
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) {
            if(j <= 5 - i) {
                std::cout << "  ";
            }
            else{
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 6 - i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    return 0;
}