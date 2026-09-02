/* Chapter 1. Exercise 2. A simple C++ to list instructions to bring a humanoid
 * robot like C3PO from a dining room to a bathroom. Imagine that the dining room 
 * is located downstairs, dining table has 6 places, 1 place each in the East and West
 * and 2 places each in the North and South. C3PO is sitting in the chair located NE.
 * The door leading out is located to SE corner of the room. Another door leading
 * upstairs is located to NE of the dining room door. After this there are 6 stairs
 * facing E, 6 stairs facing N and 4 stairs facing W. This leads to a corridor, with
 * many doors. The bathroom is the first door on the left side, aka S. All doors need
 * to be pulled to open, except for the bathroom door, which needs to be pushed. C3PO
 * is currently eating, with a fork in the right hand and a knife in the left.  
*/

#include <iostream>

int main()
{
    std::cout << "Set down the fork at a 150 degree angle with the handle pointing downward.\n";
    std::cout << "Set down the knife at a 30 degree angle with the handle pointing downward.\n";
    std::cout << "Hold the chair on the sides with hands. Lift yourself 5 cm from the seat.\n";
    std::cout << "Push the chair 20 cm back. Let go of the chair. Turn 90 degrees anti-clockwise.\n";
    std::cout << "Walk 2 meters, turn 90 degrees clockwise, walk 3 meters.\n";
    std::cout << "Grab the door handle with your right hand and turn 30 degrees clockwise.\n";
    std::cout << "Pull the door open then let go of the handle and walk through.\n";
    std::cout << "Walk 1 meter, turn 90 degrees anti-clockwise to face E.\n";
    std::cout << "Walk 1 meter, turn 90 degrees anti-clockwise to face N. Walk 2 meters.\n";
    std::cout << "Grab the door handle with your right hand and turn 30 degrees clockwise.\n";
    std::cout << "Pull the door open then let go of the handle and walk through.\n";
    std::cout << "Walk 1 meter, turn 90 degrees clockwise. Climb 6 stairs step by step.\n";
    std::cout << "Turn 90 degrees anti-clockwise to face North. Climb 6 stairs step by step.\n";
    std::cout << "Turn 90 degrees anti-clockwise to face West. Climb 4 stairs step by step.\n";
    std::cout << "Walk 1 meter, turn 90 degress anti-clockwise, facing South.\n";
    std::cout << "Grab the door handle with your right hand and turn 30 degrees clockwise.\n";
    std::cout << "Push the door open then let go of the handle and walk through.\n";
    std::cout << "YOU HAVE SUCCESSFULLY REACHED THE BATHROOM!\n";
    return 0;
}