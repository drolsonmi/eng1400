#include <iostream>
using namespace std;

int main()
{
 /*   int grade_level;

    cout << "Enter your grade level\n";
    cout << "  1) Freshman\n";
    cout << "  2) Sophomore\n";
    cout << "  3) Junior\n";
    cout << "  4) Senior\n";
    cin >> grade_level;

    switch (grade_level)
    {
        case 1: 
            cout << "Room 102\n";
            break;
        case 2: 
            cout << "Room 205\n";
            break;
        case 3: 
            cout << "Room 208\n";
            break;
        case 4: 
            cout << "Room 110\n";
            break;
        //default: 
        //    cout << "Invalid entry\n";
    }
*/
    int year;
    cout << "Enter the year: ";
    cin >> year;

    int chinese_yr = year%12;
    switch (chinese_yr)    
    {
        case 0:
            cout << "Monkey\n";
            break;
        case 1:
            cout << "Rooster\n";
            break;
        case 2:
            cout << "Dog\n";
            break;
        case 3:
            cout << "Pig\n";
            break;
        case 4:
            cout << "Rat\n";
            break;
        case 5:
            cout << "Ox\n";
            break;
        case 6:
            cout << "Tiger\n";
            break;
        case 7:
            cout << "Rabbit\n";
            break;
        case 8:
            cout << "Dragon\n";
            break;
        case 9:
            cout << "Snake\n";
            break;
        case 10:
            cout << "Horse\n";
            break;
        case 11:
            cout << "Goat\n";
            break;
    }
}