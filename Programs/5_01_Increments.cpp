#include <iostream>
using namespace std;

int main()
{
    int num1 = 5, 
        num2 = 10,
        result;
    char ch;
    
    cout << "result = num1 + num2" << endl << endl;
    result = num1++ + num2;
    cout << result << " = " << num1 << " + " << num2 << endl << endl;

    cout << "Press any key for the next calculation.";
    cin.get(ch);
    cin.ignore(10, '\n');

    result = num1 + --num2;
    cout << endl << result << " = " << num1 << " + " << num2 << endl << endl;
    
    cout << "Press any key for the next calculation.";
    cin.get(ch);
    cin.ignore(10, '\n');
    
    result = num1++ + --num2;
    cout << endl << result << " = " << num1 << " + " << num2 << endl << endl;
    
}