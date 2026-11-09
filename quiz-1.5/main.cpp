#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    return 0;
}

/*
* Question #1
Run this program multiple times and describe the output that results when you enter the following types of input:

a) A letter, such as h
answer: you entered 0, extraction failed

b) A number with a fractional part (e.g. 3.2). Try numbers with fractional parts less than 0.5 and greater than 0.5 (e.g. 3.2 and 3.7).
answer: you entered 3, float is truncated

c) A small negative integer, such as -3.
answer: you entered -3, valid integer value is assigned

d) A word, such as Hello.
answer: you entered 0, same as a, invalid input and extraction error

e) A really big number (at least 3 billion).
answer: you entered 2147483647, max integer possible gets assigned

f) A small number followed by some letters, such as 123abc.
answer: you entered 123, the integer that is found is assigned, the rest is kept in buffer

g) A few letters followed by a small number, such as abc123.
answer: you entered 0, extraction fails because the first character is not a number

h) +5 (three spaces, followed by a plus symbol, and a 5).
answer: you entered 5, whitespace is skipped and it's a valid positive integer so it gets extracted

i) 5b6
answer: you entered 5, b is a character so everything after that is kept in buffer and only the initial number is extracted
*/
