#include <iostream>

int doubleNumber(int x) {
    return x * 2;
}

int main() { 
    int in_x{};
    std::cout << "Enter an integer: ";
    std::cin >> in_x;
    std::cout << "The double of " << in_x << " is: " << doubleNumber(in_x) << '\n';
	return 0;
}
