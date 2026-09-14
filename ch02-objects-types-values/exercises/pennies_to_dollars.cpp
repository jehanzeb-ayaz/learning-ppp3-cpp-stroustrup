/* Chapter 2. Exercise 11. A C++ program that queries
 * the user separately for the number of each size coin
 * and prints the sum of all of them.
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "How many pennies do you have?\n";
        int pennies = -1;       
        cin >> pennies; 

        cout << "How many nickles do you have?\n";
        int nickles = -1;       
        cin >> nickles;              

        cout << "How many dimes do you have?\n";
        int dimes = -1;       
        cin >> dimes; 
        
        cout << "How many quarters do you have?\n";
        int quarters = -1;       
        cin >> quarters; 

        cout << "How many half-dollars do you have?\n";
        int half_dollars = -1;       
        cin >> half_dollars; 

        cout << "How many dollars do you have?\n";
        int dollars = -1;       
        cin >> dollars; 
        
        if (pennies == 1)
        {
            cout << "You have a penny.\n";
        }
        else if (pennies > 1)
        {
            cout << "You have " << pennies << " pennies.\n";
        }

        if (nickles == 1)
        {
            cout << "You have a nickle.\n";
        }
        else if (nickles > 1)
        {
            cout << "You have " << nickles << " nickles.\n";
        }

        if (dimes == 1)
        {
            cout << "You have a dime.\n";
        }
        else if (dimes > 1)
        {
            cout << "You have " << dimes << " dimes.\n";
        }

        if (quarters == 1)
        {
            cout << "You have a quarter.\n";
        }
        else if (quarters > 1)
        {
            cout << "You have " << quarters << " quarters.\n";
        }

        if (half_dollars == 1)
        {
            cout << "You have a half-dollar.\n";
        }
        else if (half_dollars > 1)
        {
            cout << "You have " << half_dollars << " half-dollars.\n";
        }

        if (dollars == 1)
        {
            cout << "You have a dollar.\n";
        }
        else if (dollars > 1)
        {
            cout << "You have " << dollars << " dollars.\n";
        }

        int result = (pennies * 1) + (nickles * 5) + (dimes * 10)
                        + (quarters * 25) + (half_dollars * 50)
                        + (dollars * 100);
        cout << "The value of all your coins is " << result << " cents.\n";

        double improv_result = result / 100.0;
        cout << "The value of all your coins is " << improv_result << " dollars.\n";

        return 0;
}