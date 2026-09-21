/* Chapter 03. Exercise 06. A C++ program that acts as
 * a simple calculator, asks the user to input two 
 * double value and a character, then prints the correct
 * response. Handles four basic operations: +, -, * and /.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    cout << "Enter two double values and an operation ('+', '-', '*', '/') please ('|' to terminate):\n";

    double operand1 = -1.0, operand2 = -1.0;
    char entered_operation = ' ';

    cin >> operand1 >> operand2 >> entered_operation;

    double sum = operand1 + operand2;
    double diff = operand1 - operand2;
    double prod = operand1 * operand2;
    double quot = operand1 / operand2;

    switch (entered_operation) {
        case '+':
                cout << "The sum of " << operand1 << " and " << operand2 << " is " << sum << ".\n";
                break;

        case '-':
                cout << "The difference between " << operand1 << " and " << operand2 << " is " << diff << ".\n";
                break;

        case '*':
                cout << "The product of " << operand1 << " and " << operand2 << " is " << prod << ".\n";
                break;

        case '/':
                cout << "The quotient of " << operand1 << " and " << operand2 << " is " << quot << ".\n";
                break;

        default:
                cout << "I do not recognise this operation yet!\n";
                return 0;
    }
    
    return 0;
}