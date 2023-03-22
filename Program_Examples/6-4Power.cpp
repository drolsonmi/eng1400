#include <iostream>
using namespace std;

float power(float, float); // Prototype

int main()
{
    float a;
    int b;

    cout << "We are going to calculate a^b.\n";
    cout << "Input a (can be a decimal): ";
    cin >> a;
    cout << "Input b (must be an integer): ";
    cin >> b;

    cout << a << "^" << b << " = " << power(a,b) << endl; // Function Call
                                        //   ^--- Arguments
    cout << a << endl;
}

float power(float i, float j)  // Function Header
{       //      ^------- Parameters
    float result = 1;
    for(int count=1; count<=j; count++)
        result *= i;
    i *= 4;
    return result;
}