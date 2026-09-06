/* Chapter 2. Drill 1. "Name and age" example from the book
 * modified to write a letter to someone.
*/

#include <iostream>

int main()      
{
         std::cout << "Enter the name of the person you want to write to\n";
         std::string first_name = "???";    // string variable ("???" indicates "don’t know the name")
         std::cin >> first_name;     // read a string
         std::cout << "Dear " << first_name << ", \n";
}