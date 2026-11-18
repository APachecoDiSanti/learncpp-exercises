# Best practices 

## 0.4 - Introduction to C++ development
1. Name the first/primary source code file in each program main.cpp. This makes it easy to determine which source code file is the primary one.

## 0.7 - Compiling your first program
1. Create a new project for each new program you write.

## 0.9 - Configuring your compiler: Build configurations
1. Use the debug build configuration when developing your programs. When you’re ready to release your executable to others, or want to test performance, use the release build configuration.

## 0.10 - Configuring your compiler: Compiler extensions
1. Disable compiler extensions to ensure your programs (and coding practices) remain compliant with C++ standards and will work on any system.

## 0.11 - Configuring your compiler: Warning and error levels
1. Don’t let warnings pile up. Resolve them as you encounter them (as if they were errors). Otherwise a warning about a serious issue may be lost amongst warnings about non-serious issues.
2. Turn your warning levels up, especially while you are learning. The additional diagnostic information may help in identifying programming mistakes that can cause your program to malfunction.
3. Enable “Treat warnings as errors”. This will force you to resolve all issues causing warnings.

## 1.2 - Comments
1. Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

## 1.3 - Introduction to objects and variables
1. Although the language allows you to do so, avoid defining multiple variables of the same type in a single statement. Instead, define each variable in a separate statement on its own line (and then use a single-line comment to document what it is used for).

## 1.4 - Variable assignment and initialization
1. Prefer direct-list-initialization or value-initialization to initialize your variables.
2. Initialize your variables upon creation.

## 1.5 - Introduction to iostream: cout, cin, and endl
1. Output a newline whenever a line of output is complete.
2. Prefer `\n` over `std::endl` when outputting text to the console.

## 1.6 - Uninitialized variables and undefined behavior
1. Avoid implementation-defined and unspecified behavior whenever possible, as they may cause your program to malfunction on other implementations.

## 1.7 - Keywords and naming identifiers
1. When working in an existing program, use the conventions of that program (even if they don’t conform to modern best practices). Use modern best practices when you’re writing new programs.

## 1.8 - Whitespace and basic formatting
1. Consider keeping your lines to 80 chars or less in length.
2. When working in an existing project, be consistent with whatever style has already been adopted.
3. Using the automatic formatting feature is highly recommended to keep your code’s formatting style consistent.

## 1.11 - Developing your first program
1. New programmers often try to write an entire program all at once, and then get overwhelmed when it produces a lot of errors. A better strategy is to add one piece at a time, make sure it compiles, and test it. Then when you’re sure it’s working, move on to the next piece.

## 2.2 - Function return values (value-returning functions)
1. Your `main` function should return the value `0` if the program ran normally.
2. Make sure your functions with non-void return types return a value in all cases. Failure to return a value from a value-returning function will cause undefined behavior.
3. Follow DRY: “Don’t repeat yourself”. If you need to do something more than once, consider how to modify your code to remove as much redundancy as possible. Variables can be used to store the results of calculations that need to be used more than once (so we don’t have to repeat the calculation). Functions can be used to define a sequence of statements we want to execute more than once. And loops (which we’ll cover in a later chapter) can be used to execute a statement more than once. Like all best practices, DRY is meant to be a guideline, not an absolute. Reader Yariv has noted that DRY can harm overall comprehension when code is broken into pieces that are too small. 

## 2.3 - Void functions (non-value returning functions)
1. Do not put a return statement at the end of a non-value returning function.

## 2.4 - Introduction to function parameters and arguments
1. When a function parameter exists but is not used in the body of the function, do not give it a name. You can optionally put a name inside a comment.

## 2.5 - Introduction to local scope
1. Define your local variables as close to their first use as reasonable.
2. When a variable is needed within a function:
    1. Use a function parameter when the caller will pass in the initialization value for the variable as an argument.
    2. Use a local variable otherwise.

## 2.7 - Forward declarations and definitions
1. When addressing compilation errors or warnings in your programs, resolve the first issue listed and then compile again.
2. Keep the parameter names in your function declarations.


## 2.8 - Programs with multiple code files
1. When you add new code files to your project, give them a .cpp extension.

## 2.9 - Naming collisions and an introduction to namespaces
1. Use explicit namespace prefixes to access identifiers defined in a namespace.

## 2.10 - Introduction to the preprocessor
1. Macro names should be written in all uppercase letters, with words separated by underscores.
2. Avoid macros with substitution text unless no viable alternatives exist.


## 2.11 - Header files
1. Prefer a .h suffix when naming your header files (unless your project already follows some other convention). This is a longstanding convention for C++ header files, and most IDEs still default to .h over other options.
2. If a header file is paired with a code file (e.g. add.h with add.cpp), they should both have the same base name (add).
3. Do not put function and variable definitions in your header files (for now). Defining either of these in a header file will likely result in a violation of the one-definition rule (ODR) if that header is then #included into more than one source (.cpp) file.
4. Source files should #include their paired header file (if one exists).
5. Avoid #including .cpp files.
6. Use the standard library header files without the .h extension. User-defined headers should still use a .h extension.
7. Each file should explicitly #include all of the header files it needs to compile. Do not rely on headers included transitively from other headers.
8. To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows (skipping any that are not relevant):
    1. The paired header file for this code file (e.g. add.cpp should #include "add.h")
    2. Other headers from the same project (e.g. #include "mymath.h")
    3. 3rd party library headers (e.g. #include <boost/tuple/tuple.hpp>)
    4.Standard library headers (e.g. #include <iostream>)
9. The headers for each grouping should be sorted alphabetically (unless the documentation for a 3rd party library instructs you to do otherwise).
10. Always include header guards (we’ll cover these next lesson).
11. Do not define variables and functions in header files (for now).
12. Give a header file the same name as the source file it’s associated with (e.g. grades.h is paired with grades.cpp).
13. Each header file should have a specific job, and be as independent as possible. For example, you might put all your declarations related to functionality A in A.h and all your declarations related to functionality B in B.h. That way if you only care about A later, you can just include A.h and not get any of the stuff related to B.
14. Be mindful of which headers you need to explicitly include for the functionality that you are using in your code files, to avoid inadvertent transitive includes.
15. A header file should #include any other headers containing functionality it needs. Such a header should compile successfully when #included into a .cpp file by itself.
16. Only #include what you need (don’t include everything just because you can).
17. Do not #include .cpp files.
18. Prefer putting documentation on what something does or how to use it in the header. It’s more likely to be seen there. Documentation describing how something works should remain in the source files.


## 3.10 - Finding issues before they become problems
1. Use a static analysis tool on your programs to help find areas where your code is non-compliant with best practices.
