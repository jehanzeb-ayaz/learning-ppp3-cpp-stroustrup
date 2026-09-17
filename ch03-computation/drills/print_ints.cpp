/* Chapter 3. Drill 1. A C++ program that asks the user
 * to enter two integer values (continuously in a while-loop)
 * and prints them, until the user  enters '|'.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    int val1= -1, val2 = -1;
    cout << "Enter two integer values please ('|' to terminate):\n";

    while (cin >> val1 >> val2)
    {
        cout << val1 << " " << val2 << "\n";
        cout << "Enter two integer values please ('|' to terminate):\n";
    }

    return 0;
}