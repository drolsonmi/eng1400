# Exam 3
The exam will be in 2 parts:
1. Written portion given in the testing center
    * Allowed a 3x5 notecard
2. Programming challenge

## Chapter 7 - Arrays and Vectors
* Arrays
  * What they are and why we use them
  * Defining arrays
  * Initializing arrays
    * Partial initialization
  * Accessing array elements
    * `array[i]`
  * Array Boundaries
    * Overwriting memory outside of array
    * Off-by-One Errors
      * Arrays start with index/element 0
  * Range-based *for* Loop
    * `for(int val:array)`
  * Duplicating/Printing/Comparing arrays (element-by-element)
  * Max/Min in Array
  * Parallel Arrays
  * Arrays as function arguments
    * Unlike variables, arrays edited in the function will change original array
```c
// Prototype
void squareValue(int [], int);

// Calling
int main()
{
  ...
  int number[SIZE] = {1, 2, 3, 4, 5};
  ...
  squareValues(number,SIZE);
  ...
}

// Function Header
void squareValue(int my_array[], int size)
{
  ...
}
```

    
  * Two-Dimensional and Multi-Dimensional Arrays
    * `array[i][j][k]`
* Vectors
  * Declaring and Initializing Vectors
    * `#include <vector>`
    * `vector<int> my_vector(size)` or `vector<int> my_vector`
  * Member Functions
    * `vec.size()`
    * `vec.push_back()` - Adds values to a full vector
    * `vec.pop_back()` - Removes last value from a vector
    * `vec.clear()`
    * `vec.empty()` - Determines if a vector is empty

## Chapter 8 - Searching and Sorting Arrays
* Search Algorithms
  * Linear Search
  * Binary Search
    * Must be sorted
  * Advantages/Disadvantages to each
* Sorting Algorithms
  * Bubble Sort
    * Compare and Swap 2 Elements
  * Selection Sort
    * Find minimum value and swap with element 0
  * Advantages/Disadvantages to each
* Searching and Sorting Vectors

## Chapter 9 - Pointers
* Addresses
  * `&var` - *Address Operator*
* Pointer Variables
  * Declaring a pointer
    * `int *varPtr` or `int* varPtr` for an array
  * Initializing a pointer
    * `int *ptr = nullptr;`
    * `int *ptr = &x;`
    * Data-type of pointer describes variable it is pointing at
  * Accessing memory using pointers
    * Dereferencing
    * `*varPtr` - *Indirection Operator*
  * Arrays and Pointers
    * Array names are themselves pointers. The following are all the same:
      * `arr[i]`, `*(arr + i)`, `arrPtr[i]`, `*(arrPtr + i)`
  * Pointer Arithmetic
  * Comparing Pointers
    * `ptr1 == ptr2` compares addresses
    * `*ptr1 == *ptr2` compares values
  * Pointers as Function Parameters
    * Prototype: Use Indirection Operator (*)
    * Function Header: Use Indirection Operator (*)
    * Calling: Use Address Operator (&) unless passing an array
```c
// Prototype
void doubleValue(int *);

// Calling
int main()
{
  int number;
  ...
  doubleValue(&number); // If passing an array,
                        // there is no need to use "&"
  ...
}

// Function Header
void doubleValue(int *ptr)
{
  ...
}
```
    
  * Pointers and Constants
    * Pointer to a Constant
    * Constant Pointer
    * Constant Pointer to a Constant
  * Returning Pointers from Functions
```c
    char *findNull(char *str)
    {
        char *ptr = str;
        while (*ptr != '\0')
            ptr++;
        return ptr;
    }
```
* Dynamic Memory Allocation
  * Reserve memory for variables/arrays in the middle of the program
  * Declaring
    * `int_ptr = new int;`
    * `arr_ptr = new int[SIZE]`
  * Removing variable from dynamic memory
    * Memory Leak
    * `delete int_ptr`
    * `delete [] arr_ptr`
* Smart Pointers
  * unique pointer
```c
# include <memory>

unique_ptr<int> ptr( new int );
```