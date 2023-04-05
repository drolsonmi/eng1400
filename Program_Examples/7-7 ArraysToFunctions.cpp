/*
  1. User inputs size and values of an array (ordered numbers, least to greatest)
  2. Create functions to calculate statistics of the function
    * Mean
    * Median
    * Max
    * Min
    * 25th percentile = 1st quartile
    * Standard Deviation
*/
#include <iostream>
#include <cmath>
using namespace std;

float avg(float [], int);
float maximum(float [], int);
float minimum(float [], int);
float st_dev(float [], int);

int main()
{
    int size;

    cout << "How many data points are you entering? ";
    cin >> size;

    float array[size];

    for(int i=0; i<size; i++)
    {
        cout << "Entry #" << i+1 << " = ";
        cin >> array[i];
    }

    cout << "The average is " << avg(array, size) << endl;
    cout << "The maximum is " << maximum(array, size) << endl;
    cout << "The minimum is " << minimum(array, size) << endl;
    cout << "The standard deviation is " << st_dev(array, size) << endl;
}

float avg(float data[], int n)
{
    float total = 0;

    for(int i=0; i < n ; i++)
        total += data[i];

    return total/n;
}

float maximum(float data[], int n)
{
    float m = -99999999;
    for(int i=0; i < n; i++)
        if (data[i] > m)
            m = data[i];
    return m;
}

float minimum(float data[], int n)
{
    float m = 99999999;
    for(int i=0; i < n; i++)
        if (data[i] < m)
            m = data[i];
    return m;
}

float st_dev(float data[], int n)
{
    float total = 0;
    float average = avg(data, n);

    for(int i=0; i < n ; i++)
        total += pow(data[i] - average, 2);

    return sqrt( total / (n-1) );
}