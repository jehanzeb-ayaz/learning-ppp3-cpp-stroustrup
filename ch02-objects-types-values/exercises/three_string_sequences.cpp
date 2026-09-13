/* Chapter 2. Exercise 7. Modify program from Exercise 6.
 * Ask the user to input three string literals and return 
 * them in an alphabetical sequence separated by commas.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter the first string:\n";
        string val1 = "";                   // string variable ("" means "don’t know the string")
        getline(cin, val1);                 // read a string including blank spaces

        cout << "Enter the second string:\n";
        string val2 = "";       
        getline(cin, val2);              

        cout << "Enter the third string:\n";
        string val3 = "";
        getline(cin, val3);                      
        
        if (val1 <= val2 && val2 <= val3)
        {
            cout << val1 << ", " << val2 << ", " << val3 << ".\n";
        }
        else if (val1 <= val3 && val3 <= val2)
        {
            cout << val1 << ", " << val3 << ", " << val2 << ".\n";
        }

        else if (val2 <= val1 && val1 <= val3)
        {
            cout << val2 << ", " << val1 << ", " << val3 << ".\n";
        }
        else if (val2 <= val3 && val3 <= val1)
        {
            cout << val2 << ", " << val3 << ", " << val1 << ".\n";
        }

        else if (val3 <= val1 && val1 <= val2)
        {
            cout << val3 << ", " << val1 << ", " << val2 << ".\n";
        }
        else if (val3 <= val2 && val2 <= val1)
        {
            cout << val3 << ", " << val2 << ", " << val1 << ".\n";
        }

        return 0;
}