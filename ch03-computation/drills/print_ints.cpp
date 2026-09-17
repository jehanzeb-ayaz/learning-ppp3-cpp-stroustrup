/* Chapter 3. Drill 1. A C++ program that asks the user
 * to enter two integer values (continuously in a while-loop)
 * and prints them, until the user  enters '|'.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    double val1= -1.0, val2 = -1.0;
    cout << "Enter two floating-point values please ('|' to terminate):\n";

    while (cin >> val1 >> val2)
    {
        cout << val1 << " " << val2 << "\n";
        
        if (val1 == val2)
        {
            cout << "the numbers are equal.\n";
        }
        else if (val1 - val2 > -0.009 && val1 - val2 < 0.009)
        {
            cout << "the numbers are almost equal.\n";
        }
        else 
        {
            cout << "the smaller value is: " << (val1 < val2 ? val1 : val2) << ".\n";
            cout << "the larger value is: " << (val1 > val2 ? val1 : val2) << ".\n";
        }

        cout << "Enter two floating-point values please ('|' to terminate):\n";
    }

    return 0;
}