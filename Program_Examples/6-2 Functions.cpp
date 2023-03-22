/*
    Create a program that finds all the factors of 20.
*/
#include <iostream>
using namespace std;

void find_factor(int);

int main()
{
    cout << "Let's find the factors of 20." << endl;

    void find_factor(int x)
    {
        if(20 % x == 0)
        {   
            cout << "You found a factor! ";
            cout << x << " * " << 20/x << endl;
        }
    }

    find_factor(1);
    find_factor(2);
    find_factor(3);
    find_factor(4);
    find_factor(5);
    find_factor(6);
    find_factor(7);
    find_factor(8);
    find_factor(9);
    find_factor(10);

    return 0;
}

