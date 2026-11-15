/*
Question #3

Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions instead of using forward declarations directly in your code (.cpp) files. Make sure your header file uses header guards.
*/
#include "io.h"

int main() {
    int x1{};
    int x2{};
    x1 = readNumber();
    x2 = readNumber();
    writeAnswer(x1 + x2);
    return 0;
}
