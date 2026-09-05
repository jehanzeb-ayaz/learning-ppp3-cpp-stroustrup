/* Chapter 2. Try This 6. Run this program with a variety of inputs:
 * Small values (e.g., 2 and 3). Large values (larger than 127, 
 * larger than 1000). Negative values. 56, 89, and 128. Non-integer 
 * values (e.g., 56.9 and 56.2).
*/

#include <iostream>

int main()
{
         double d = 0;
         while (std::cin>>d) {                      // repeat the statements below as long as we type in numbers
                  int i = d;                        // try to squeeze a floating-point value into an integer value
                  char c = i;                       // try to squeeze an integer into a char
                  std::cout << "d==" << d                               // the original double
                          << " i=="<< i                                 // double converted to int
                          << " c==" << c                                // int value of char
                          << " char(" << c << ")\n";                    // the char
         }
}