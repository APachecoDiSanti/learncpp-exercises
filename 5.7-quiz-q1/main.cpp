/*
Question #1

Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of characters in their name (use the std::string::length() member function to get the length of the string). For simplicity, count any spaces in the name as a character.

Sample output:

Enter your full name: John Doe
Enter your age: 32
Your age + length of name is: 40

Reminder: We need to be careful not to mix signed and unsigned values. std::string::length() returns an unsigned value. If you’re C++20 capable, use std::ssize() to get the length as a signed value. Otherwise, static_cast the return value of std::string::length() to an int.
*/

#include <iostream>
#include <string>

int main() {
	std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    
    std::string age{};
    std::cout << "\nEnter your age: ";
    std::getline(std::cin >> std::ws, age);

    std::cout << "\nYour age + length of name is: " << (std::stoi(age) + std::ssize(name)) << "\n";
	return 0;
}
