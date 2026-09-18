/* Chapter 3. Drill 9. A C++ program that asks the user
 * to enter a double value and a unit (cm, m, in, ft)
 * (continuously in a while-loop) and print them, 
 * until the user  enters '|'.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    constexpr double m_to_cm = 100;          // 1 m = 100 cm
    constexpr double in_to_cm = 2.54;        // 1 in = 2.54 cm
    constexpr double ft_to_in = 12;          // 1 ft = 12 in

    double val1= -1.0;
    vector<double> entered_numbers = {};

    string entered_unit = "";
    vector<string> units = {"cm", "m", "in", "ft"};

    cout << "Enter a floating-point value and a unit please ('|' to terminate):\n";

    double smallest = -1.0, largest = -1.0;
    double sum = 0.0;           //in meters
    double val_in_m = -1.0;

    while (cin >> val1 >> entered_unit)
    {
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

        if (entered_unit == "cm")
        {
            val_in_m = val1/m_to_cm;
            sum = sum + val_in_m;
        }
        else if (entered_unit == "m")
        {
            val_in_m = val1;
            sum = sum + val_in_m;
        }
        else if (entered_unit == "in")
        {
            double temp = -1.0;
            temp = val1 * in_to_cm;
            val_in_m = temp/m_to_cm;
            sum = sum + val_in_m;
        }
        else if (entered_unit == "ft")
        {
            double temp1 = -1.0, temp2 = -1.0;
            temp1 = val1 * ft_to_in;
            temp2 = temp1 * in_to_cm;
            val_in_m = temp2/m_to_cm;
            sum = sum + val_in_m;
        }

        entered_numbers.push_back(val_in_m);
        ranges::sort(entered_numbers);

        smallest = entered_numbers[0];
        largest = entered_numbers[entered_numbers.size() - 1];

        cout << smallest << " is the smallest so far.\n";
        cout << largest << " is the largest so far.\n";
        cout << "The number of values entered so far is " << entered_numbers.size() << ".\n";
        cout << "The sum of values entered (in meters) is: " << sum << ".\n";

        cout << "Enter a floating-point value and a unit please ('|' to terminate):\n";
    }

    return 0;
}