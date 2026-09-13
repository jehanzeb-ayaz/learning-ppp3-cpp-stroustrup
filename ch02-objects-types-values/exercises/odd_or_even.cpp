/* Chapter 2. Exercise 8. Ask the user to input an integer
 * and return whether the integer is even or odd.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter an integer:\n";
        int val1 = -1;                      // int variable (-1 means "don’t know the integer")
        cin >> val1;                        // read an integer

        if (val1 % 2 == 0)
        {
            cout << "The value " << val1 << " is an even number.\n";
        }
        else
        {
            cout << "The value " << val1 << " is an odd number.\n";
        }

        return 0;
}