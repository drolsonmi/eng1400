#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greeting1 = "Hello, ";
    string greeting2 = "Buenos dias, ";

    string name, friend_name;

    cout << "Good morning! Who are you? ";
    getline(cin, name);
    cout << greeting1 + name << endl;
    cout << "Who is your friend? ";
    getline(cin, friend_name);
    cout << greeting2 + friend_name << endl;
}