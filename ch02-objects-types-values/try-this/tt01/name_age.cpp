/* Chapter 2. Try This 1. "Name and age" example fromm the book
 * corrected such that it runs. Then modified to write out the 
 * age in number of months: read the input in years and multiply 
 * (using the * operator) by 12. Read the age into a double.
*/

#include <iostream>

int main()      // read name and age
{
         std::cout << "Please enter your first name and age (in years)(part of a year possible)\n";
         std::string first_name = "???";    // string variable ("???" indicates "don’t know the name")
         double age = -1.0;                 // double variable (-1.0 means "don’t know the age")
         std::cin >> first_name >> age;     // read a string followed by an integer
         std::cout << "Hello, " << first_name << " (age " << age * 12  << ")(in months)\n";
}