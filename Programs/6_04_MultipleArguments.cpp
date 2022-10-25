#include <iostream>
#include <cmath>
using namespace std;

// Prototypes
void quadratic(int, int, int);

int main()
{
    int A,B,C;

    cout << "We're solving the quadratic equation using the ";
    cout << "quadratic formula." << endl;
    cout << "Enter the coefficients A, B, and C, separated by spaces.\n";
    cin >> A >> B >> C;

    quadratic(A,B,C);
}

void quadratic(int a, int b, int c)
{
    double result1, result2;

    result1 = (-b + sqrt(pow(b,2) - (4*a*c)))/(2*a);
    result2 = (-b - sqrt(pow(b,2) - (4*a*c)))/(2*a);

    cout << "x = " << result1 << " or " << result2 << endl;
}