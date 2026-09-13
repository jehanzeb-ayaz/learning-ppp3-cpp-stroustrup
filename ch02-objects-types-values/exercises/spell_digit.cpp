/* Chapter 2. Exercise 9. A C++ program that converts 
 * spelled-out numbers such as “zero” and “two” into 
 * digits, such as 0 and 2. (Only for values 0 to 4)
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter a digit spelled-out (e.g. 'zero'):\n";
        string val1 = "";                   // string variable ("" means "don’t know the string")
        getline(cin, val1);                 // read a string including blank spaces                     
        
        if (val1 == "zero")
        {
            cout << "0\n";
        }
        else if (val1 == "one")
        {
            cout << "1\n";
        }
        else if (val1 == "two")
        {
            cout << "2\n";
        }
        else if (val1 == "three")
        {
            cout << "3\n";
        }
        else if (val1 == "four")
        {
            cout << "4\n";
        }
        else
        {
            cout << "Not a number I know!\n";
        }

        return 0;
}