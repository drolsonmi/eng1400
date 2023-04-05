#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 4; // Number of rows
    const int NUM_COLS = 5; // Number of columns
    float total = 0;          // Accumulator
    int numbers[NUM_ROWS][NUM_COLS] = 
        {{2, 7, 9, 6, 4},
         {6, 1, 8, 9, 4},
         {4, 3, 7, 2, 9},
         {9, 9, 0, 3, 1}};

    // Total of all elements
    for (int i=0; i<NUM_ROWS; i++)
    {
        for (int j=0; j<NUM_COLS; j++)
        {
            total += numbers[i][j];
        }
    }

    cout << "Total of the 2D array: " << total << endl;
    float average = total / (NUM_ROWS*NUM_COLS);
    cout << "Average of the 2D array: " << average << endl;

    // Total of each row
    float total_rows[NUM_ROWS] = {0};
    for (int i=0; i<NUM_ROWS; i++)
    {
        for (int j=0; j<NUM_COLS; j++)
        {
            total_rows[i] += numbers[i][j];
        }
        cout << "The total of row " << i+1 << " is " << total_rows[i] << endl;
    }

    // Total of each column
    float total_cols[NUM_COLS] = {0};
    for (int j=0; j<NUM_COLS; j++)
    {
        for (int i=0; i<NUM_ROWS; i++)
        {
            total_cols[j] += numbers[i][j];
        }
        cout << "The total of row " << i+1 << " is " << total_rows[i] << endl;
    }
}