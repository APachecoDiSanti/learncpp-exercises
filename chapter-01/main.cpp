#include <iostream>

int main() {
	// As of C++17, copy-initialization, direct-initialization, and direct-list-initialization behave identically in most cases.

	// variable definition with default initialization (no initializer)
	//int a;

	// copy initialization
	// less efficient than other forms of initialization for some complex types
	// used whenever values are implicitly copied
	int b = 5;

	// direct initialization
	// more efficient initialization of complex objects
	// used when values are explicitly cast to another type
	int c(6);

	// direct list initialization (preferred)
	// also called list initialization or brace initialization
	// narrowing conversions are disallowed (e.g: from float to int)
	int d{ 7 };

	// value initialization (empty braces, preferred)
	// initializes to a value as closest to 0 as possible for the given type
	// for classes, this may be a set of predefined default values
	// recommended when the variable's value is temporary and will be replaced
	int e{};

	int width { 5 };

	// attribute that tells the compiler that we're ok with a variable being unused
	// useful when defining values that are used elsewhere (as in library code)
	[[maybe_unused]] double pi{ 3.14159 }; 
	
	// generates error C4700: uninitialized local variable 'a' used
	//std::cout << a;
	// << is the insertion operator
	// std::endl will print a newline and force flush the buffer
	// \n is a newline character
	std::cout << "b: " << b << '\n';
	std::cout << "c: " << c << '\n';
	std::cout << "d: " << d << '\n';
	std::cout << "e: " << e << '\n';
	std::cout << "width: " << width << std::endl;

	std::cout << "Enter two numbers separated by a space: ";
	int x{};
	int y{};
	// >> is the extraction operator
	// each line of input is terminated by \n character
	std::cin >> x >> y;
	std::cout << "You entered " << x << " and " << y << '\n';

	return 0;
}
