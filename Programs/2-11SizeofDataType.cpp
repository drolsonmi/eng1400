#include <iostream>
using namespace std;

int main()
{
    double pi;    // variable declaration
    pi = 3.14159; // variable assignment
    
    //double pi = 3.14159; // variable initialization

    cout << "A double has a size of " << sizeof(pi) << " bytes.\n";
    cout << "A double has a size of " << sizeof(double) << " bytes.\n" << endl;

    cout << "A short int has a size of " << sizeof(short) << " bytes.\n";
    cout << "A int has a size of " << sizeof(int) << " bytes.\n";
    cout << "A char has a size of " << sizeof(char) << " bytes.\n";
    cout << "A bool has a size of " << sizeof(bool) << " bytes.\n";
    cout << "A float has a size of " << sizeof(float) << " bytes.\n";
    cout << "A long double has a size of " << sizeof(long double) << " bytes.\n";

    auto sqrt2 = pow(2, 0.5); // Have to use variable initialization
    
}