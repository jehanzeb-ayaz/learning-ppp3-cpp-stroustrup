/* Chapter 3. Try This 5. A C++ program that 
 * returns the square of an int without using
 * the function square().
*/

#include "../../../support/PPPheaders.h"

int main()      
{
    cout << "Enter an integer:\n";
    int value = 0;
    cin >> value;

    int square_value = 0;

    for (int i = 0; i < value; ++i)
    {
        square_value = square_value + value;
    }

    cout << square_value << ".\n";

    return 0;
}