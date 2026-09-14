/* Chapter 3. Try This 2. A C++ program that converts yen,
 * kroner and pounds to dollars.
*/

#include "../../../support/PPPheaders.h"

int main()      
{
    constexpr double yen_to_dollar = 0.0065;           // exchange rate from yen to dollar
    constexpr double kroner_to_dollar = 0.11;          // exchange rate from kroner to dollar
    constexpr double pound_to_dollar = 1.35;           // exchange rate from pound to dollar
    constexpr double swiss_franc_to_dollar = 1.22;     // exchange rate from swiss franc to dollar

    double amount = -1.0;                                 
    char unit = ' ';
    cout<< "Please enter an amount followed by a currency unit (y, k or p):\n";
    cin >> amount >> unit;

    switch (unit) {
        case 'y': 
                cout << amount << " yen = " << amount * yen_to_dollar << " dollars\n";
                break;
        
        case 'k':
                cout << amount << " kroner = " << amount * kroner_to_dollar << " dollars\n";
                break;

        case 'p':
                cout << amount << " pounds = " << amount * pound_to_dollar << " dollars\n";
                break;
        
        case 's':
                cout << amount << " swiss francs = " << amount * swiss_franc_to_dollar << " dollars\n";
                break;

        default:
                cout << "I do not recognise this currency yet!\n";
    }

    return 0;
}