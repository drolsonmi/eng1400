/* This is a program that squares a user-defined number 
   Michael Olson 
   January 30, 2023 */

#include <iostream>
using namespace std;

int main()
{
    float num,result;
    cout << "This program will take any number and square it.\n\n";
    
    // Input
    cout << "What number should I square?   ";
    cin >> num;
    cout << "Input yet another number:      ";
    cin >> num;
    
    // Calculation or Process
    result = num*num;  // the square of a number is the number times itself

    // Output
    cout << "The square root is " << result << endl;
}