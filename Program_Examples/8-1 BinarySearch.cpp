#include <iostream>
using namespace std;

int binarySearch(int [], int, int);

int main()
{
    int value_position;
    int array[10] = {4,7,12,15,15,18,20,23,36,30};

    value_position = binarySearch(array, 10, 21);
    if (value_position == -1)
        cout << "That value is not found." << endl;
    else
        cout << "That value is found at position " << value_position << endl;
}

int binarySearch(int array[], int size, int value)
{
    int first = 0;
    int last = size-1;
    int middle;

    int position = -1;
    bool found = false;

    while(!found && first <= last)
    {
        middle = (first + last)/2;
        cout << "First = " << first << " , Middle = ";
        cout << middle << " , Last = " << last << endl;

        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle-1;
        else
            first = middle+1;
    } // End of while loop
    return position;
}