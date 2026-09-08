/* Chapter 2. Drill 1-3. "Name and age" example from the book
 * modified to write a letter to someone. Add a few sentences
 * along with indentation.
*/

#include "../../support/PPPheaders.h"

int main()      
{
         std::cout << "Enter the name and the age of the person you want to write to:\n";
         string first_name = "???";    // string variable ("???" indicates "don’t know the name")
         int age = -1;                      // int variable (-1 means "don’t know the age")
         std::cin >> first_name >> age;     // read a string
         if (age < 0 || age > 110)
         {
            error("you're kidding!");
         }

         std::cout << "Enter the name of the common friend:\n";
         string friend_name = "???";    
         std::cin >> friend_name;

         std::cout << "Dear " << first_name << ", \n";
         std::cout << "I hope you are doing well. I am fine here. I am \n";
         std::cout << "making steady progress here. How about you? How are\n";
         std::cout << "things in San Francisco?\n";
         std::cout << "I hear you just had a birthday and you are " << age << "\n";
         std::cout << "years old. How was your birthday party? And have you,\n";
         std::cout << "by any chance, seen " << friend_name << " lately?\n";
}