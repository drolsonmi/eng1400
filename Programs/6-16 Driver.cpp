#include <iostream>
using namespace std;

void calculation(int);

int main()
{
    cout << "Testing my function\n";
    calculation(5);
    cout << "Done testing the function.\n";
}

void calculation(int A)
{
    float B = A*A/2;
    cout << "The acceleration of (1/2)a^2 = " << B << endl;
}