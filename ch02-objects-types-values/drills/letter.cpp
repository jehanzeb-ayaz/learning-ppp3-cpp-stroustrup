/* Chapter 2. Drill 1-3. "Name and age" example from the book
 * modified to write a letter to someone. Add a few sentences
 * along with indentation.
*/

#include <iostream>

int main()      
{
         std::cout << "Enter the name of the person you want to write to:\n";
         std::string first_name = "???";    // string variable ("???" indicates "don’t know the name")
         std::cin >> first_name;     // read a string

         std::cout << "Enter the name of the common friend:\n";
         std::string friend_name = "???";    
         std::cin >> friend_name;

         std::cout << "Dear " << first_name << ", \n";
         std::cout << "I hope you are doing well. I am fine here. I am \n";
         std::cout << "making steady progress here. How about you? How are\n";
         std::cout << "things in San Francisco? And have you, by any chance,\n";
         std::cout << "seen " << friend_name << " lately?\n";
}