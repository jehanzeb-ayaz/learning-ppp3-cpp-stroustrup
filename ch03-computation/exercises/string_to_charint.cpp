/* Chapter 03. Exercise 02. A C++ program that reads a 
 * string from input, then prints out each character read
 * and its integer value.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    string entered_string = "";
    getline(cin, entered_string);

    for (int i = 0; i < entered_string.size(); ++i)
    {
        cout << entered_string[i] << " : " << (int) entered_string[i] << ".\n";
    }

    return 0;
}