/* Summary of Pointers*/
#include <iostream>
using namespace std;

int main()
{
    int num = 42;           // Initialize a variable

    cout << num << endl;    // Outputs the value of my variable (42)
    cout << &num<< endl;    // Outputs the address where variable is stored (0x448c2)

    int *num_ptr;           // Declare a pointer for the variable

    num_ptr = &num;         // Store address of variable in pointer (0x448c2)

    cout << num_ptr << endl;  // Outputs the address the pointer is storing (0x448c2)
    cout << *num_ptr << endl; // Outputs the value stored at the address (42)

    int num2 = 5;
    int *num2_ptr = &num2;

    cout << num_ptr << "   " << num2_ptr << endl;
    cout << *num_ptr << "   " << *num2_ptr << endl;

    if (num_ptr > num2_ptr)
        cout << "Num1 Pointer is larger than Num2 Pointer\n";
    else
        cout << "Num1 Pointer is smaller than Num2 Pointer\n";

    cout << "Num1 Ptr - Num2 Ptr = " << num_ptr - num2_ptr << endl;
    cout << "Value in Num1                    : " << *num_ptr << endl;
    cout << "Value in block after Num1        : " << *(num_ptr+1) << endl;
    cout << "Value in block before Num1 (Num2): " << *(num_ptr-1) << endl;
}