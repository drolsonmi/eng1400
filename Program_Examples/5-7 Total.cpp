#include <iostream>
using namespace std;

int main()
{
    int num=1, sum=0;
    for(; num <= 1000; num++)
        sum += num;
    
    cout << sum << endl;
}