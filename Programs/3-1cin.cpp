#include <iostream>
using namespace std;

int main()
{
    // Greeting
    cout << "This program calculates the area of a ";
    cout << "rectangular yard.\n\n";

    // Input
    float num_float;
    int num_int;
    char var_char;

    cout << "Input a float, an integer, and a character:\n";
    cin >> num_int >> num_float >> var_char;

    // Output
    cout << "The float is " << num_float << endl;
    cout << "The integer is " << num_int << endl;
    cout << "The character is " << var_char << endl;
}