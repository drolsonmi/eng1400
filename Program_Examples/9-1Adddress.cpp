#include <iostream>
using namespace std;

int main()
{
    int num = 42;
    cout << num << endl;
    cout << &num << endl;

    int *numptr = &num;
    cout << "The address of the num variable is " << numptr << endl;
    cout << "The value of the num variable is   " << *numptr << endl;
}