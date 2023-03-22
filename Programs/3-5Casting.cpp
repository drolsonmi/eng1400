#include <iostream>
using namespace std;

int main()
{
    char A;

    cout << "Input a character: ";
    cin >> A;
    cout << "The character " << A;
    cout << " has an ASCII code of " << static_cast<int>(A) << endl;
    cout << "Still a code of " << int(A) << endl;
}