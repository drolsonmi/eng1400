#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    int result = 1;

    for(int count=1; count <= exponent; count++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    // Variables
    int a,b,r;

    // Input
    cout << "Input a base (as a whole number integer): ";
    cin >> a;
    cout << "Input an exponent (as a whole positive number): ";
    cin >> b;

    // Calculation
    r = power(a,b);

    // Output
    cout << a << "^" << b << " = " << r << endl;
    cout << a << "^" << b << " = " << power(a,b) << endl;

    return 0;
}