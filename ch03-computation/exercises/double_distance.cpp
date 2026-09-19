/* Chapter 03. Exercise 04. A C++ program that reads a 
 * sequence of doubles from input into a vector, then 
 * prints out the sum of all distances, the smallest
 * and largest distances, and the mean distance.
*/

#include "../../support/PPPheaders.h"

int main()      
{
    cout << "Enter distance between two cities along a given route please ('|' to terminate):\n";

    vector<double> distances;                   // distances
    for(double dist; cin >> dist;)              // read into dist
    {              
        distances.push_back(dist);              // put dist into vector
        cout << "Enter distance between two cities along a given route please ('|' to terminate):\n";
    }

    // compute mean distance:
    double sum = 0;
    for (double x : distances)
            sum += x;

    ranges::sort(distances);                    // sort the distances

    double smallest = distances[0];
    double largest = distances[distances.size() - 1];

    cout << "Sum of all distances: " << sum << '\n';
    cout << "Average distance: " << sum/distances.size() << '\n';
    cout << "Smallest distance: " << smallest << '\n';
    cout << "Largest distance: " << largest << '\n';
    
    return 0;
}