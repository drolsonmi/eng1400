/*

This program will create two random numbers between
1 and 6, simulating 2 dice being thrown.

Algorithm:
1. Initialize 2 dice variables
2. Set the seed for the random number generator
    seed = time(0)
3. Create a random number and store in die_1
    rand() % 6 + 1
4. Create a random number and store in die_2
5. Display the 2 dice

*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Initialze variables
    int die_1, die_2;

    // Set the seed
    unsigned seed = time(0);
    srand(seed);

    // Calculate the random numbers
    die_1 = rand() % 6 + 1;
    die_2 = rand() % 6 + 1;

    // Output
    cout << "You rolled a " << die_1 << " and a " << die_2 << endl;
}