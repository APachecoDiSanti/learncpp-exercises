/*
Question #1
Split the following program into two files(main.cpp, and input.cpp).main.cpp should have the main function, and input.cpp should have the getInteger function.
*/


#include <iostream>

int getInteger();

int main() {
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}
