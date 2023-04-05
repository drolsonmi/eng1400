#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 4;

    float age[SIZE];
    float height[SIZE];
    float number[SIZE];

    for(int i=0; i<SIZE; i++)
    {
        cout << "Person " << i << ":\n";
        cout << "Enter your age: ";
        cin >> age[i];
        cout << "Enter your height in inches: ";
        cin >> height[i];
        cout << "Enter your number: ";
        cin >> number[i];
    }

    float total_age = 0;
    float total_height = 0;
    float total_num = 0;
    for(int i=0; i<SIZE; i++)
    {
        total_age += age[i];
        total_height += height[i];
        total_num += number[i];
    }

    cout << "The total age is " << total_age 
         << " with an average of " << total_age/SIZE << endl;
    cout << "The total height is " << total_height
         << " with an average of " << total_height/SIZE << endl;
    cout << "The total number is " << total_num
         << " with an average of " << total_num/SIZE << endl;
}