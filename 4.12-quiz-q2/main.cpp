/*
Question #2

Modify the program you wrote for quiz #1 to use implicit type conversion instead of static_cast. How many different ways can you think of to do this?

Note: You should favor explicit conversions over implicit conversions, so don’t actually do this in real programs -- this is just to test your understanding of where implicit conversions can occur.
*/
#include <iostream>

int main() {
    std::cout << "Enter a single character: ";
    char in_char{};
    std::cin >> in_char;
    int ascii_code{};
    ascii_code = in_char;
    std::cout << "The character '" << in_char << "' has the ASCII code " << ascii_code << ".\n";
    return 0;
}
