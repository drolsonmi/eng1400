#include <iostream>
using namespace std;

void selectiondescend(int [], int);
void bubbleascend(int [], int);
void bubbledescend(int [], int);
void swap(int [], int, int);

int main()
{
    int size = 10;
    int data[size] = {1, 5, 14, 8, 2, 10, 9, 3, 0, 7};
    
    //swap(data, 1, 2);
    //bubbledescend(data, size);
    //bubbleascend(data, size);
    selectiondescend(data, size);
    
    for(int i=0; i<size; i++)
        cout << data[i] << "  ";
    cout << endl;
}

void selectiondescend(int array[], int n)
{
    int count = 1;
    while(n-count >= 0)
    {
        int min_index = 0;
        for(int i=0; i <= n-count; i++)
        {
            if(array[i] < array[min_index])
                min_index = i;
        }
        swap(array, min_index, n-count);
        count++;
    }

}

void bubbleascend(int array[], int n)
{
    int count = 2;
    while(n-count >= 0)
    {
        for(int i=0; i<= n-count; i++)
        {
            if(array[i]>array[i+1])
                swap(array,i,i+1);
        }
        count++;
    }
}

void bubbledescend(int array[], int n)
{
    int count = 2;
    while(n-count >= 0)
    {
        for(int i=0; i<= n-count; i++)
        {
            if(array[i]<array[i+1])
                swap(array,i,i+1);
        }
        count++;
    }
}

void swap(int array[], int index1, int index2)
{
    int tmp = array[index1];
    array[index1] = array[index2];
    array[index2] = tmp;
}