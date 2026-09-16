/* Chapter 3. Try This 6. A C++ program bleeps
 * out words that you don't like.
*/

#include "../../../support/PPPheaders.h"

int main()      
{
    string disliked = "Broccoli";

    cout << "Enter any word of your choice:\n";
    string entered_word = " ";
    cin >> entered_word;

    if (entered_word == disliked)
    {
        cout << "BLEEP\n";
    }
    else
    {
        cout << entered_word << "\n";
    }

    return 0;
}