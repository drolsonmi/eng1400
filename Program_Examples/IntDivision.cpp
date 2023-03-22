#include <iostream>
using namespace std;

int main()
{
    int A = 25;
    int B = 19;

    float Q = static_cast<float>(A) / B;
    int R = A % B;

    cout << Q << "\a" << endl; 
}