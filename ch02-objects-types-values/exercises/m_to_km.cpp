/* Chapter 2. Exercise 1. C++ program to convert miles to
 * kilometers.
*/

#include "../../support/PPPheaders.h"

int main()      
{
         double miles, kilometers = -1.0; // miles and kilometers not known yet.
         cout << "Please enter the number of miles you wish to convert to kilometers:\n";
         cin >> miles;
         kilometers = miles * 1.609;
         if (miles == 1.0)
         {
            cout << miles << " mile is equivalent to " << kilometers << " km.\n";
         }
         else if (miles > 1.0)
         {
            cout << miles << " miles are equivalent to " << kilometers << " km.\n";
         }
         else
         {
            error("Invalid value entered.\n"); 
         }

         return 0;
}