/*
Question #2

Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
*/

int readNumber();
void writeAnswer(int num);

int main() {
    int x1{};
    int x2{};
    x1 = readNumber();
    x2 = readNumber();
    writeAnswer(x1 + x2);
    return 0;
}
