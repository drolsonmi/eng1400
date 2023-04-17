#include <iostream>
using namespace std;

int main()
{
    int pi_decimals[] = {1,4,1,5,9,2,6,5,3,5,8,9};
    int *piptr = pi_decimals;
    int decimal;

    cout << "Which of the first 12 decimals of pi do you want to know? ";
    cin >> decimal;
    piptr += decimal - 1;
    cout << "Element #" << decimal << " is " << *piptr << endl;

    char next;
    do
    {
        cout << "Do you want the previous (-) or next (+) decimal?" << endl;
        cout << "Type (0) to quit";
        cin >> next;
        if (next == '+')
            cout << "That decimal is " << *(++piptr) << endl;
        if (next == '-')
            cout << "That decimal is " << *(--piptr) << endl;
    } while(next != '0');

    cout << "Thanks for playing!" << endl;
}