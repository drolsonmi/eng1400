#include <iostream>
#include <cmath>
using namespace std;

double quadratic(int,int,int);

int main()
{
    cout << quadratic(1,7,2) << endl;
}

double quadratic(int A, int B, int C)
{
    int inside;
    double top, result;

    inside = pow(B,2) - (4*A*C);
    top = B + sqrt(inside);
    result = top / (2*A);
    return result;
}