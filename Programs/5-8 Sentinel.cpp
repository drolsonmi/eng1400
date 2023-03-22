#include <iostream>
using namespace std;

int main()
{
    int total=0;
    int score;
    
    cout << "Enter your students' scores." << endl;
    cout << "Type (q) to stop entering scores." << endl;

    cin >> score;

    while(score != 113)
    {
        cout << "score = " << score << endl;
        total += score;
        cin >> score;
    }
}