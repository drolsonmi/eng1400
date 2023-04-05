#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> scores;

    int entry;

    cout << "Input a score (0 to stop entering scores): ";
    cin >> entry;
    
    // Get scores
    do
    {
        scores.push_back(entry);
        cout << "Input a score (0 to stop entering scores): ";
        cin >> entry;
    } while (entry != 0);

    int s = scores.size();

    float total = 0;
    for (int i=0; i<s; i++)
    {
        total += scores[i];
    }
    cout << "Average score = " << total/s << endl;
    
}