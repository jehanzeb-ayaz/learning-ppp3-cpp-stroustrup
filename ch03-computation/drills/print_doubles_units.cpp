/* Chapter 3. Drill 8. A C++ program that asks the user
 * to enter a double value and a unit (cm, m, in, ft)
 * (continuously in a while-loop) and print them, 
 * until the user  enters '|'.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    double val1= -1.0;
    vector<double> entered_numbers = {};

    string entered_unit = "";
    vector<string> units = {"cm", "m", "in", "ft"};

    cout << "Enter a floating-point value and a unit please ('|' to terminate):\n";

    while (cin >> val1 >> entered_unit)
    {
        entered_numbers.push_back(val1);
        ranges::sort(entered_numbers);
        
        int flag = -1;

        for (string x : units)
        {
            if (x == entered_unit)
            {
                flag = 1;            // entered unit found in units dictionary/list
            }
        }

        // if entered_unit is not found in units
        if (flag != 1)
        {
            cout << "Wrong unit entered!\n";
            return 0;
        }

        cout << val1 << entered_unit << ".\n";

        cout << "Enter two floating-point values please ('|' to terminate):\n";
    }

    return 0;
}