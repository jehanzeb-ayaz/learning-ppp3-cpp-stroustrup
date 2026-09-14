/* Chapter 3. Try This 4. A C++ program prints
 * letters of the alphabet and their corresponding
 * ASCII integer values.
*/

#include "../../../support/PPPheaders.h"

int main()      
{
    char letter = 'a';
    char big_letter = 'A';

    for (int i = 0; i < 26; ++i)
    {
        cout << letter << "  " << (int) letter << " | " << big_letter << "  " << (int) big_letter << "\n";
        ++letter;
        ++big_letter;
    }

    char digit = '0';

    for (int j = 0; j < 10; ++j)
    {
        cout << digit << "  " << (int) digit << "\n";
        ++digit;
    }

    return 0;
}