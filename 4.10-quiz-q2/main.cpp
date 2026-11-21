/*
Question #2
A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. 
Write a program that asks the user to enter a number 0 through 9 (inclusive). 
If the user enters a number within this range that is prime (2, 3, 5, or 7), print “The digit is prime”. 
Otherwise, print “The digit is not prime”.
*/
#include <iostream>

bool is_prime(int num) {
    bool result = false;
    if (num == 2) {
        result = true;
    }
    else if (num == 3) {
        result = true;
    }
    else if (num == 5) {
        result = true;
    }
    else if (num == 7) {
        result = true;
    }
    return result;
}


int main() {
	std::cout << "Enter a number between 0 and 9 (inclusive): ";
    int x{};
    std::cin >> x;
    std::cout << "The number " << x << " is ";
    if (x < 0) {
        std::cout << "invalid input.\n";
        return 1;
    }
    if (x > 9) {
        std::cout << "invalid input.\n";
        return 1;
    }

    if (is_prime(x)) {
        std::cout << "prime.\n";
    }
    else {
        std::cout << "not prime.\n";
    }
	return 0;
}
