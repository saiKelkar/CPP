/*
Static global variables -- initialized within functions
-- can be only accessed by the function where it is initialized
-- but stays until the very end of the program, and doesn't get deleted once the function ends

// int v = 0; // can be accessed by all the functions and stays till the program ends

void fun() {
    static int v = 0; // can be accessed by only function fun, but stays till the program ends
    int a = 5;
    v++;
    std::cout << a << " " << v;
}

main() {
    fun();
    fun();
    fun();
}

*/