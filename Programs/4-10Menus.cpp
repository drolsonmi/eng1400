#include <iostream>
using namespace std;

int main()
{
    float a,b;
    int choice = 0;

    cout << "This is a basic calculator.\n";
    cout << "Input two numbers for us to calculate, then choose the operator.\n";
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << endl;

    cout << "Choose the operation:\n";
    cout << "  1) +\n";
    cout << "  2) -\n";
    cout << "  3) *\n";
    cout << "  4) /\n";
    cout << "  5) %\n";
    cout << "Operator: ";
    cin >> choice;

    if (choice == 1)
        cout << a << " + " << b << " = " << a+b << endl;
    else if (choice == 2)
        cout << a << " - " << b << " = " << a-b << endl;
    else if (choice == 3)
        cout << a << " * " << b << " = " << a*b << endl;
    else if (choice == 4)
    {
        if (b == 0)
            cout << "Can't divide by zero.\n";
        else
            cout << a << " / " << b << " = " << a/b << endl;
    }
    else if (choice == 5)
        cout << a << " % " << b << " = " << static_cast<int>(a) % static_cast<int>(b) << endl;
    else
        cout << "Not a valid option!" << endl;
}