/*
Question #1

Write a short program where the user is asked to enter a single character. Print the value of the character and its ASCII code, using static_cast.

The program’s output should match the following:

Enter a single character: a
You entered 'a', which has ASCII code 97.

*/

#include <iostream>

int main() {
	std::cout << "Enter a single character: ";
    char in_char{};
    std::cin >> in_char;

    std::cout << "The character '" << in_char << "' has the ASCII code " << static_cast<int>(in_char) << ".\n";
	return 0;
}
