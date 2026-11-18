/*
Question #1

The following program is supposed to add two numbers, but doesn’t work correctly.

Use the integrated debugger to step through this program and watch the value of x. Based on the information you learn, fix the following program:
*/
#include <iostream>

// shouldn't be an input parameter
int readNumber() {
    int x{};
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x) {
    std::cout << "The sum is: " << x << '\n';
}

int main() {
    int x{};
    x = readNumber() + readNumber();  // values weren't being stored
    writeAnswer(x);

    return 0;
}
