/* Chapter 2. Exercise 4. Ask the user to input two
 * integer values and perform some operatinos on them.
 * Return the results.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter the first integer:\n";
        int val1 = -1;                      // int variable (-1 means "don’t know the integer")
        cin >> val1;                        // read an integer

        cout << "Enter the second integer:\n";
        int val2 = -1;                      // int variable (-1 means "don’t know the integer")
        cin >> val2;                        // read an integer
        
        // smaller
        if (val1 < val2)
        {
            cout << val1 << " is smaller than " << val2 << ".\n";
        }
        else if (val2 < val1)
        {
            cout << val2 << " is smaller than " << val1 << ".\n";
        }
        else
        {
            cout << val1 << " and " << val2 << " are both equal to one another.\n";
        }

        // larger
        if (val1 > val2)
        {
            cout << val1 << " is larger than " << val2 << ".\n";
        }
        else if (val2 > val1)
        {
            cout << val2 << " is larger than " << val1 << ".\n";
        }
        else
        {
            cout << val1 << " and " << val2 << " are both equal to one another.\n";
        }

        // sum
        int sum = 0;
        sum = val1 + val2;
        cout << "The sum of " << val1 << " and " << val2 << " is: " << sum << ".\n";

        // difference
        int difference = 0;
        difference = val1 - val2;
        cout << "The difference between " << val1 << " and " << val2 << " is: " << difference << ".\n";

        // product
        int product = 0;
        product = val1 * val2;
        cout << "The product of " << val1 << " and " << val2 << " is: " << product << ".\n";

        // ratio
        int ratio = 0;
        ratio = val1 / val2;
        cout << "The ratio of " << val1 << " and " << val2 << " is: " << ratio << ".\n";

        return 0;
}