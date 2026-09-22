/* Chapter 03. Exercise 07. A C++ program that 
 * converts a digit to its corresponding spelled-out 
 * value and vice versa.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    vector<string> digit_words = {"zero", "one", "two", "three", "four",
                                "five", "six", "seven", "eight", "nine"};
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int entered_number = -1;
    cin >> entered_number;

    switch (entered_number) {
        case 0:
                cout << digit_words[0] << ".\n";;
                cout << digits[0] << ".\n";;
                break;

        case 1:
                cout << digit_words[1] << ".\n";;
                cout << digits[1] << ".\n";;
                break;

        case 2:
                cout << digit_words[2] << ".\n";;
                cout << digits[2] << ".\n";;
                break;

        case 3:
                cout << digit_words[3] << ".\n";;
                cout << digits[3] << ".\n";;
                break;

        case 4:
                cout << digit_words[4] << ".\n";;
                cout << digits[4] << ".\n";;
                break;

        case 5:
                cout << digit_words[5] << ".\n";;
                cout << digits[5] << ".\n";;
                break;

        case 6:
                cout << digit_words[6] << ".\n";;
                cout << digits[6] << ".\n";;
                break;

        case 7:
                cout << digit_words[7] << ".\n";;
                cout << digits[7] << ".\n";;
                break;

        case 8:
                cout << digit_words[8] << ".\n";;
                cout << digits[8] << ".\n";;
                break;
        
        case 9:
                cout << digit_words[9] << ".\n";;
                cout << digits[9] << ".\n";;
                break;

        default:
                cout << "Unknown value.\n";
    }
    
    return 0;
}