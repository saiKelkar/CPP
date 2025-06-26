#include <iostream>
#include <cstring>

int main() {

    char s[50] = "Hello World";
    // length of the string
    std::cout << strlen(s) << std::endl; // 11, 5 + 5 + 1 (space character)

    // concatinate two strings
    char s1[20] = "Good";
    char s2[20] = "Morning";

    strcat(s1, s2);
    std::cout << s1 << std::endl;

    // how many characters we want to concatinate
    strncat(s1, s2, 3);
    std::cout << s1 << std::endl;

    // copy containts of one string to another
    char s3[10] = "Hello";
    char s4[10] = "";

    strcpy(s4, s3);
    std::cout << s4 << std::endl;

    // substring
    char s5[20] = "Programming";
    char s6[10] = "gram";

    std::cout << strstr(s5, s6) << std::endl;

    // Find the occurance of a character in the main string
    char s7[20] = "Programming";
    std::cout << strchr(s7, 'r') << std::endl; // prints rogramming

    // String compare
    char t1[20] = "Hello";
    char t2[20] = "Hello";

    std::cout << strcmp(t1, t2) << std::endl; // prints 0 as both the strings are the same

    char t3[20] = "hello";
    char t4[20] = "Hello";
    std::cout << strcmp(t3, t4) << std::endl; // prints 32 / positive number if the 1st string is greater than the second
    // basically prints the difference between the first letter, 97 - 65 = 32 
    // result is different for different strings

    char t5[20] = "Hello";
    char t6[20] = "hello";
    std::cout << strcmp(t5, t6) << std::endl; // prints -32 / negative number if the first string is smaller than the second

    char t7[20] = "235";
    char t8[20] = "54.78";

    // strtol -- string to long (str to l)
    long int x = strtol(t7, NULL, 10); // NULL for last character, end of string, and 10 as is it an integer
    // strtof -- string to float (str to f)
    float y = strtof(t8, NULL); // same logic applies here

    std::cout << x + 10 << " " << y << std::endl;

    // string tokeniser
    char s8[20] = "x=10;y=20;z=35";
    char* token = strtok(s8, ";");

    while(token != NULL) {
        std::cout << token << std::endl;
        token = strtok(NULL, ";");
    }

    return 0;
}