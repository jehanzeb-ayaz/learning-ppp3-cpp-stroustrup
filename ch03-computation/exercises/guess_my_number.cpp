/* Chapter 03. Exercise 05. A C++ program that guesses
 * the number in between 1 and 100, that the user is
 * thinking of, in no more than 7 questions.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    char initial_answer = ' ';
    while (initial_answer != 'y')
    {
        cout << "Have you thought of a number between 1 and 100? (y/n):\n";
        cin >> initial_answer;
    }

    int low = 1, high = 100;
    char answer = ' ', confirm = ' ';

    for (int i = 0; i < 7; ++i)
    {
        cout << "Is the number you are thinking of less than or equal to " << (high + low) / 2 << "? (y/n):\n";
        cin >> answer;
        switch (answer) {
                case 'y':
                        high = (high + low) / 2;
                        break;

                case 'n':
                        low = ((high + low) / 2) + 1;
                        break;
        }
    }

    cout << "Is your number: " << rand()%(high - low + 1) + low << "? (y/n)\n";
    cin >> confirm;
        switch (confirm) {
                case 'y':
                        cout << "Congratulations!\n";
                        break;

                case 'n':
                        cout << "Damn it!\n";
                        break;
        }

    return 0;
}