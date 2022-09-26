#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    
    cout << rand() % 100 << endl;
    cout << rand() % 100 << endl;
    cout << rand() % 100 << endl;
    cout << rand() % 100 << endl;
    cout << rand() % 100 << endl;
}