#include <iostream>
using namespace std;

int main()
{
    char letter5;

    cout << "What is the 5th letter of your name?\n";
    cout << "What is your name? ";
    cin.ignore(4);
    cin.get(letter5);

    cout << "The 5th letter of your name is " << letter5 << endl;

}