#include <iostream>
using namespace std;

int main()
{
    int a,b,c, out1, out2;

    cout << "Input the coefficients for your quadratic equation:\n";
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;

    out1 = b/a;
    out2 = c/a;

    cout << out1 << endl;
    cout << out2 << endl;
}