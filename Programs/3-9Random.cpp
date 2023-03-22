#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 99;

    unsigned seed = time(0);
    int random_num;

    int guess;

    srand(seed);
    random_num = rand() % (MAX_VALUE - MIN_VALUE + 1);
    random_num += MIN_VALUE;
    
    //cout << random_num << endl;

    cout << "Guess a number between 1 and 99\n";
    do
    {
        cin >> guess;
        if (guess > random_num)
        {
            cout << "Too high!\n";
        }
        else if (guess < random_num)
        {
            cout << "Too low\n";
        }
        else if (guess == random_num)
        {
            cout << "You got it! Congratulations!\n";
        }
    }while(guess != random_num);
    return 0;
}