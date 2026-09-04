/* Chapter 2. Try This 4. "Repeated Word" example from the book
 * corrected such that it runs. Tested it with the sentence 
 * She she laughed "he he he!" because what he did did not look very very good good.
 * She she is not a repitition. Word is defined as a string containing
 * some characters.
*/

#include <iostream>

int main()
{
         std::string previous;              // previous word; initialized to ""
         std::string current;               // current word
         while (std::cin>>current) {        // read a stream of words
                  if (previous == current)  // check if the word is the same as last
                           std::cout << "repeated word: " << current << '\n';
                  previous = current;
         }
}