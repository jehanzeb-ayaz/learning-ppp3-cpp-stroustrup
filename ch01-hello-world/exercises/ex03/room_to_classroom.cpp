/* Chapter 1. Exercise 3. A simple C++ program to list instructions
 * for walking from the front door of Mercator College, Block A (a residential
 * college on the Constructor University Bremen campus) to the ground-floor
 * lecture hall in Reimar Lüst Hall (RLH). On campus, Mercator College sits 
 * near the Campus Center/IRC, while RLH is near the Main Gate/reception on 
 * the opposite side of the College Ring.
*/

#include <iostream>

int main()
{
    std::cout << "Exit Mercator College, Block A through the main entrance door (push to open).\n";
    std::cout << "Turn right and walk along the path toward the College Ring. Turn left.\n";
    std::cout << "Walk straight along Campus Ring, passing Krupp College on your left.\n";
    std::cout << "Follow the College Ring, keeping the Campus Center / IRC on your right.\n";
    std::cout << "At the junction with Campus Ring, turn right onto Campus Ring.\n";
    std::cout << "Continue until you reach Reimar Lüst Hall (RLH), the large building near the Main Gate.\n";
    std::cout << "Enter through the South RLH entrance (pull to open).\n";
    std::cout << "Once inside, walk up the short flight of steps, then turn right into a corridor.\n";
    std::cout << "Walk to the end of the corridor to the lecture hall door and enter.\n";
    std::cout << "YOU HAVE SUCCESSFULLY REACHED THE CLASSROOM!\n";
    return 0;
}