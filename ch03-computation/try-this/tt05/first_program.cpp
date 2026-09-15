/* Chapter 3. Try This 5. A C++ program that 
 * mimics "the first stored program ever" (EDSAC)
 * without using the function square().
*/

#include "../../../support/PPPheaders.h"

int my_square (int value)
{
    int square_value = 0;

    for (int i = 0; i < value; ++i)
    {
        square_value = square_value + value;
    }

    return square_value;
}

int main()      
{
    for (int i = 0; i < 100; ++i)
    {
        cout << i << "  " << my_square(i) << "\n";
    }

    return 0;
}