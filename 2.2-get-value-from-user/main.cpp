#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>

int getValueFromUser() { // this function now returns an integer value
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    // Failure to return a value from a value-returning function will cause undefined behavior.
    return input; // return the value the user entered back to the caller
}

int main()  {
    int num{ getValueFromUser() }; // initialize num with the return value of getValueFromUser()

    std::cout << num << " doubled is: " << num * 2 << '\n';

    // If you want to maximize portability, you should only use 0 or EXIT_SUCCESS to indicate a successful termination, or EXIT_FAILURE to indicate an unsuccessful termination.
    return EXIT_SUCCESS; 
}
