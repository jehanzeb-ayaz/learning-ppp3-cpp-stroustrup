/* Chapter 3. Drill 6. A C++ program that asks the user
 * to enter two double values (continuously in a while-loop)
 * and prints them, until the user  enters '|'.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    double val1= -1.0;
    vector<double> entered_numbers = {};
    cout << "Enter a floating-point value please ('|' to terminate):\n";

    double smallest = -1.0, largest = -1.0;

    while (cin >> val1)
    {
        entered_numbers.push_back(val1);
        ranges::sort(entered_numbers);

        smallest = entered_numbers[0];
        largest = entered_numbers[entered_numbers.size() - 1];

        if (val1 == smallest)
        {
            cout << smallest << " is the smallest so far.\n";
        }
        else if (val1 == largest)
        {
            cout << largest << " is the largest so far.\n";
        }
        else
        {
            cout << val1 << "\n";
        }

        cout << "Enter two floating-point values please ('|' to terminate):\n";
    }

    return 0;
}