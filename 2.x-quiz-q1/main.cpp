#include <iostream>

/*
Question #1

Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

    A function named “readNumber” should be used to get (and return) a single integer from the user.
    A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
    A main() function should be used to glue the above functions together.
*/
int readNumber() {
    int in_num{};
    std::cout << "Please enter a number: " << '\n';
    std::cin >> in_num;
    return in_num;
}

void writeAnswer(int num) {
    std::cout << "The addition totals " << num << '\n';
}

int main() {
    int x1{};
    int x2{};
    x1 = readNumber();
    x2 = readNumber();
    writeAnswer(x1 + x2);
	return 0;
}
