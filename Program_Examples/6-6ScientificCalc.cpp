#include <iostream>
#include <cmath>
using namespace std;



char OperationMenu();
float add(float,float);
float subtract(float,float);
float exponential(float,float);
float logarithm(float,float);
float sine(float);
float cosine(float);

int main()
{
    float A, B, result;
    char choice;

    cout << "Scientific Calculator\n" << endl;
    cout << "Input a number: ";
    cin >> A;

    choice = OperationMenu();

    if((choice != 'e') && (choice != 'f'))
    {
        cout << "Input another number: ";
        cin >> B;
    }

    switch(choice)
    {
        case 'a': result = add(A,B); break;
        case 'b': result = subtract(A,B); break;
        case 'c': result = exponential(A,B); break;
        case 'd': result = logarithm(A,B); break;
        case 'e': result = sine(A); break;
        case 'f': result = cosine(A); break;
        default: cout << "That wasn't an option." << endl;
    }

    cout << "That comes out to " << result << endl;
}

const float PI = 3.141592653589;

char OperationMenu()
{
    char option;
    cout << "Choose an operation:\n";
    cout << "  a) addition\n";
    cout << "  b) subtraction\n";
    cout << "  c) exponential (a^b)\n";
    cout << "  d) logarithm (log_b a)\n";
    cout << "  e) sin(x)\n";
    cout << "  f) cos(x)\n";
    cin >> option;
    return option;
}

float add(float a, float b)
{
    //int c = A + a;
    //cout << c << endl;
    return a+b;
}

float subtract(float a, float b)
{
    cout << a << "+" << b << " = " << add(a,b);
    return a-b;
}

float exponential(float a, float b)
{
    return pow(a,b);
}

float logarithm(float a, float b)
{
    return log(a)/log(b);
}

float sine(float x)
{
    return sin(x*PI/180);
}

float cosine(float x)
{
    return cos(x*PI/180);
}