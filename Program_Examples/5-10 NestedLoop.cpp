#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X,Y = 1;

    for (int x=1; x <= 5; x++)
    {
        for (int y=1; y <= 5; y++)
        {
            if (pow(x,y) == 9)
                break;
            cout << x << "^" << y << " = " << pow(x,y) << endl;
        }
    }
}