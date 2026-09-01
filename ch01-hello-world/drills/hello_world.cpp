// My very first C++ program.
// A very simple program to output "Hello, World!" to the Terminal.

#include <iostream>

//import std;   // used in the book, but Apple Clang does not support it yet.
                // using #include instead.

int main()      // C++ programs start by executing the function main
{
    std::cout << "Hello, World!\n";     // output "Hello, World!"
    return 0;
}