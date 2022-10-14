#include <iostream>
using namespace std;

int main()
{
    for (int die1=1,die2=1; (die1 <= 6 && die2 <= 6); die1++)
    {
        cout << "You rolled (" << die1 <<","<< die2 << ")\n";
        if (die1 == 6)
        {
            die1 = 0;
            die2++;
        }
    }
    cout << "Programming is fun!!" << endl;
}