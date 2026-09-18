/* Chapter 03. Exercise 03. Fix the program in §3.6.3 
 * so that it always prints out a median.
*/

#include "../../support/PPPheaders.h"

int main()
        // compute mean and median temperatures
{
        vector<double> temps;                   // temperatures
        for(double temp; cin>>temp;)            // read into temp
            temps.push_back(temp);              // put temp into vector

        // compute mean temperature:
        double sum = 0;
        for (double x : temps)
                sum += x;
        cout << "Average temperature: " << sum/temps.size() << '\n';

        // compute median temperature:
        ranges::sort(temps);                    // sort the temperatures

        if (temps.size() % 2 == 0)
        {
            double med_temp = (temps[temps.size()/2 - 1] + temps[temps.size()/2]) / 2;
            cout << "Median temperature: " << med_temp << '\n';
        }
        else if (temps.size() % 2 == 1)
        {
            cout << "Median temperature: " << temps[temps.size()/2] << '\n';
        }
        
        return 0;
}