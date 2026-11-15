#include <iostream>

int readNumber() {
    int in_num{};
    std::cout << "Please enter a number: " << '\n';
    std::cin >> in_num;
    return in_num;
}

void writeAnswer(int num) {
    std::cout << "The addition totals " << num << '\n';
}
