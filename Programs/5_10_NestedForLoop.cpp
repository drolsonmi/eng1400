#include <iostream>
using namespace std;

int main()
{
    for (int die1=1; die1 <= 6; die1++)
    {
        for (int die2=1; die2 <= 6; die2++)
            cout << "You rolled (" << die1 <<","<< die2 << ")\n";
    }
    cout << "Programming is fun!!" << endl;
}