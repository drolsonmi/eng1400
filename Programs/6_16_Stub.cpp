#include <iostream>
using namespace std;

void testCounter(int cnt)
{
    if (cnt % 10 == 0)
    {
        cout << "You are at count " << cnt << endl;
    }
}

int main()
{
    for(int count=0; count <= 100; count++)
    {
        cout << count*count << endl;
        testCounter(count);
    }
}