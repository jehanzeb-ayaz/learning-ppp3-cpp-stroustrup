/* Chapter 3. Drill 7. A C++ program that asks the user
 * to enter a double value and a unit (cm, m, in, ft)
 * (continuously in a while-loop) and print them, 
 * until the user  enters '|'.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    double val1= -1.0;
    vector<double> entered_numbers = {};

    string unit = "";
    vector<string> entered_units = {"cm", "m", "in", "ft"};

    cout << "Enter a floating-point value and a unit please ('|' to terminate):\n";

    while (cin >> val1 >> unit)
    {
        entered_numbers.push_back(val1);
        ranges::sort(entered_numbers);
        
        cout << val1 << unit << ".\n";

        cout << "Enter two floating-point values please ('|' to terminate):\n";
    }

    return 0;
}