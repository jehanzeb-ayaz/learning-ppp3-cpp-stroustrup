/* Chapter 2. Try This 2. "Simple Operators" example from the book
 * corrected such that it runs. Then modified to accept an int
 * as input and also execute the modulo operator.
*/

#include <iostream>

int main()          // simple program to exercise operators
{
         std::cout << "Please enter an integer value: ";
         int n = 0;
         std::cin >> n;
         std::cout << "n == " << n
                  << "\nn+1 == " << n+1
                  << "\nthree times n == " << 3*n
                  << "\ntwice n == " << n+n
                  << "\nn squared == " << n*n
                  << "\nhalf of n == " << n/2
                  << "\nremainder of n/2 == " << n%2
                  << "\nsquare root of n == " << sqrt(n)
                  << '\n';
}