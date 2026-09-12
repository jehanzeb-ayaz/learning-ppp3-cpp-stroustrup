/* Chapter 2. Exercise 6. Ask the user to input three
 * integer values and return them in a numerical sequence
 * separated by commas.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter the first integer:\n";
        int val1 = -1;                      // int variable (-1 means "don’t know the integer")
        cin >> val1;                        // read an integer

        cout << "Enter the second integer:\n";
        int val2 = -1;       
        cin >> val2;                

        cout << "Enter the third integer:\n";
        int val3 = -1;
        cin >> val3;                       
        
        if (val1 < val2)
        {
            if (val2 <= val3)
            {
                cout << val1 << ", " << val2 << ", " << val3 << ".\n";
            }
            else if (val2 > val3)
            {
                cout << val1 << ", " << val3 << ", " << val2 << ".\n";
            }
        }
        else if (val1 > val2)
        {
            if (val2 <= val3)
            {
                cout << val2 << ", " << val3 << ", " << val1 << ".\n";
            }
            else if (val2 > val3)
            {
                cout << val3 << ", " << val2 << ", " << val1 << ".\n";
            }
        }
        else if (val1 == val2)
        {
            if (val2 <= val3)
            {
                cout << val1 << ", " << val2 << ", " << val3 << ".\n";
            }
            else if (val2 > val3)
            {
                cout << val3 << ", " << val2 << ", " << val1 << ".\n";
            }
        }

        return 0;
}