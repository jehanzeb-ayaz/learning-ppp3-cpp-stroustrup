/* Chapter 2. Exercise 3. A C++ program that does
 * not do anything but tests various legal and illegal
 * names and identifiers for what errors the compiler
 * returns.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        //int double = 0;
        int This_little_pig = 0;
        string This_1_is_fine = "";
        //double 2_For_1_special = 1.0;
        //char latest thing = ' ';
        //bool George@home = false;
        float _this_is_ok = 1.0;
        string MineMineMine = "";
        int number = 0;
        //bool correct? = false;
        //double stroustrup.com = 1.0;
        string $PATH = "";

        cout << This_little_pig << " " << This_1_is_fine << " " 
            << _this_is_ok << " " << MineMineMine << " " << number
            << " " << $PATH << "\n";

        return 0;
}