/* Chapter 3. Try This 3. A C++ program that converts yen,
 * kroner and pounds to dollars.
*/

#include "../../../support/PPPheaders.h"

int main()      
{
    int i = 0;
    char letter = 'a';

    while (i < 26)
    {
        cout << letter << "  " << (int) letter << "\n";
        ++i;
        ++letter;
    }

    return 0;
}