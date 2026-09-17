/* Chapter 3. Try This 6. A C++ program bleeps
 * out words that you don't like.
*/

#include "../../../support/PPPheaders.h"

int main()      
{
    vector<string> disliked_words = {"Jelly", "Chips", "Cola", "Sugar", "Lazy",
                                    "jelly", "chips", "cola", "sugar", "lazy"};

    cout << "Enter any word of your choice:\n";
    string entered_word = " ";
    cin >> entered_word;

    int flag = -1;

    for (string x : disliked_words)
    {
        if (x == entered_word)
        {
            cout << "BLEEP\n";
            flag = 1;            // word found in disliked_words dictionary/list
        }
    }

    // if entered_word is not found in disliked_words, print it to the console
    if (flag != 1)
    {
        cout << entered_word << "\n";
    }

    return 0;
}