// #include <string>
// std::string str; -- object of type string is created
// std::string str = "Hello"; -- creates an array with Hello inside it with terminator
// std::string -- provides a buffer space (provides more space than actual length of the string)
// automatically manages the size of the array

// std::cin >> str; -- takes only a single word
// getline(cin, str); -- takes in more than a single word

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    std::cout << str << std::endl;

    std::string newstr;
    std::cout << "Enter a string: ";
    // std::cin >> newstr;
    // std::cout << newstr << std::endl;

    getline(std::cin, newstr);
    std::cout << newstr << std::endl;

    std::cout << newstr.length() << std::endl; // length of the string
    std::cout << newstr.size() << std::endl; // similar to length
    std::cout << newstr.capacity() << std::endl; // length + buffer space given to the string array
    newstr.resize(30);
    std::cout << newstr.capacity() << std::endl; 
    std::cout << newstr.max_size() << std::endl; // what is the max size / space given to the array
    newstr.clear(); // clears the contents of the string
    std::cout << newstr << std::endl;
    std::cout << newstr.empty() << std::endl; // checks if the string is empty or not

    newstr.append(" Bye"); // adds at the end
    std::cout << newstr << std::endl;
    newstr.insert(3, "kk"); // inserts at position 3
    std::cout << newstr << std::endl;
    newstr.replace(3, 5, "aa"); // replaces text from position 3 to 5 with new text
    std::cout << newstr << std::endl;
    newstr.erase(); // empties the entire string
    std::cout << newstr << std::endl;
    newstr.push_back('z'); // adds an alphabet to the string
    std::cout << newstr << std::endl;
    newstr.pop_back(); // removes the alphabet
    std::cout << newstr << std::endl;
    newstr.swap(str); // puts the content of str into newstr, and contents of newstr into str
    std::cout << newstr << std::endl;
    std::cout << str << std::endl;

    char str_1[20];
    newstr.copy(str_1, newstr.length()); // need to put a char inside .copy()
    std::cout << str_1 << std::endl;
    std::cout << newstr.find('e') << std::endl; // gives the index of 'e', we can give word as an input as well, it'll find the index of 1st character
    // newstr.rfind('str'); -- this starts finding the some string from right side
    newstr = "Hello World"; 
    std::cout << newstr.find_first_of('l') << std::endl; // finds the 1st occurance of letter l
    std::cout << newstr.find_last_of('l') << std::endl; // finds the last occurance of the letter l
    std::cout << newstr.substr(3) << std::endl; // produces a substring from index 3 till end
    std::cout << newstr.substr(3, 5) << std::endl; // produces a substring from index 3 to 8
    str = "hello world";
    std::cout << newstr.compare(str) << std::endl; // compares two strings, based on ASCII

    std::string::iterator it;
    for(it = newstr.begin(); it != newstr.end() ; it++){
        std::cout << *it << std::endl;
    }

    std::string::reverse_iterator ti;
    for(ti = newstr.rbegin(); ti != newstr.rend(); ti++) {
        std::cout << *ti << std::endl;
    }

    return 0;
}