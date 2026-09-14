/* Chapter 2. Exercise 10. A C++ program that takes an operation
 * followed by two operands and outputs the result (for operations 
 * called +, −, *, /, plus, minus, mul, and div).
*/

#include "../../support/PPPheaders.h"

int main()      
{
        cout << "Enter the operation:\n";
        string ops = "";                   // string variable ("" means "don’t know the string")
        getline(cin, ops);                 // read a string including blank spaces

        cout << "Enter the first operand:\n";
        double operand1 = -1.0;       
        cin >> operand1;              

        cout << "Enter the second operand:\n";
        double operand2 = -1.0;
        cin >> operand2;
        
        double result = -1.0;
        
        if (ops == "+" || ops == "plus")
        {
            result = operand1 + operand2;
            cout << "The result is " << result << ".\n";
        }
        else if (ops == "-" || ops == "minus")
        {
            result = operand1 - operand2;
            cout << "The result is " << result << ".\n";
        }
        else if (ops == "*" || ops == "mul")
        {
            result = operand1 * operand2;
            cout << "The result is " << result << ".\n";
        }
        else if (ops == "/" || ops == "div")
        {
            result = operand1 / operand2;
            cout << "The result is " << result << ".\n";
        }
        else
        {
            cout << "I don't know what to do with this!\n";
        }


        return 0;
}