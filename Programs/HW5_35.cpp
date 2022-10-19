#include <iostream>
using namespace std;

int main()
{
    double num, num2;

    cout << "Give me a number. ";
    cin >> num;
    num2 = num;

    while(num < 100)
    {
        cout << "The number in the while loop is now " << num << endl;
        num *= 10;
    }

    for( ; num2 < 100; num2 *= 10)
        cout << "The number is now " << num2 << endl;
}