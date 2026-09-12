/* Chapter 2. Exercise 5. Ask the user to input two
 * floating-point values and perform some operations on them.
 * Return the results.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter the first floating-point value:\n";
        double val1 = -1.0;                 // double variable (-1.0 means "don’t know the integer")
        cin >> val1;                        // read a double

        cout << "Enter the second floating-point value:\n";
        double val2 = -1.0;                 // double variable (-1.0 means "don’t know the integer")
        cin >> val2;                        // read a double
        
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
        double sum = 0.0;
        sum = val1 + val2;
        cout << "The sum of " << val1 << " and " << val2 << " is: " << sum << ".\n";

        // difference
        double difference = 0.0;
        difference = val1 - val2;
        cout << "The difference between " << val1 << " and " << val2 << " is: " << difference << ".\n";

        // product
        double product = 0.0;
        product = val1 * val2;
        cout << "The product of " << val1 << " and " << val2 << " is: " << product << ".\n";

        // ratio
        double ratio = 0.0;
        ratio = val1 / val2;
        cout << "The ratio of " << val1 << " and " << val2 << " is: " << ratio << ".\n";

        return 0;
}