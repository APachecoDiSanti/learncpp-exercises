/*
Write the following program: 
The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31
*/

#include <iostream>

double get_double() {
    std::cout << "Enter a double value: ";
    double in_double{};
    std::cin >> in_double;
    return in_double;
}

double operate_doubles(double x1, double x2, char op_symbol) {
    double result{ NAN };
    if (op_symbol == '+') {
        result = x1 + x2;
    }
    else if (op_symbol == '-') {
        result = x1 - x2;
    }
    else if (op_symbol == '*') {
        result = x1 * x2;
    }
    else if (op_symbol == '/') {
        result = x1 / x2;
    }
    return result;
}

int main() {
    double x1{ get_double() };
    double x2{ get_double() };
    std::cout << "Enter +, -, *, or /: ";
    char op_symbol{};
    std::cin >> op_symbol;
    double result = operate_doubles(x1, x2, op_symbol);
    std::cout << x1 << " " << op_symbol << " " << x2 << " = " << result << "\n";
	return 0;
}
