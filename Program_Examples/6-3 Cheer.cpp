#include <iostream>
using namespace std;

void not_a_prime();
void found_a_prime();

int main()
{
    int number;

    cout << "Enter a number to see if it is prime." << endl;
    cin >> number;

    for(int x = 2; x <= number/2; x++)
    {
        if(number % x == 0)
        {
            not_a_prime();
            break;
        }
        else if(x == number/2)
            found_a_prime();
    }
}

void not_a_prime()
{
    cout << "That is not a prime number!" << endl;
}

void found_a_prime()
{
    cout << "WHOOOPPPPIIIIEEEE! This is a prime number!";
}