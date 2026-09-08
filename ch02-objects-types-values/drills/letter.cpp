/* Chapter 2. Drill 1-5. "Name and age" example from the book
 * modified to write a letter to someone. Add a few sentences
 * along with indentation. Prompt the user to enter the age of 
 * the recipient. Add some sentences and error checking for age.
 * Add curated messages for various ages.
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
            error("you're kidding!");       // using error() instead of simple_error() as stated 
                                            // in the book. no simple_error() foun in PPP_support.h
         }

         std::cout << "Enter the name of the common friend:\n";
         string friend_name = "???";    
         std::cin >> friend_name;

         std::cout << "Dear " << first_name << ", \n";
         std::cout << "I hope you are doing well. I am fine here. I am \n";
         std::cout << "making steady progress here. How about you? How are\n";
         std::cout << "things in San Francisco?\n";
         std::cout << "I hear you just had a birthday and you are " << age << "\n";
         std::cout << "years old. How was your birthday party?\n";

         if (age < 12)
         {
            std::cout << "Next year you will be " << age + 1 << "\n";
         }
         else if (age == 17)
         {
            std::cout << "Next year you will be able to vote.\n";
         }
         else if (age > 70)
         {
            std::cout << "Are you retired?\n";
         }

         std::cout << "Have you, by any chance, seen " << friend_name << " lately?\n";
}