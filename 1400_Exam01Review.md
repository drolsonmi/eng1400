# Exam 1
The exam will be in 2 parts:
1. Written portion given in the testing center
    * Allowed a 3x5 notecard
2. Programming challenge

## Chapter 1
* What is a program?
* Why do we program?
* Computer Hardware
  * CPU
    * "Switches" (vacuum tubes, electrical charge)
    * bits and bytes
    * Arithmetic and Logic Unit
    * Control Unit
  * Main Memory
    * Memory Addresses
  * Secondary storage
  * Input devices
  * Output devices
* What is a Program?
  * Algorithm
  * Programming language (*high-level language*)
  * Machine Language (*low-level language*)
    * Binary Numbers
    * Adding numbers in binary
    * Negating numbers in binary
    * Floating Point Representation (sign bit, exponent, and mantissa)
  * Compilers
    * Source code, Object code, Executable code
* Why are there different programming languages?
* What a program is made of?
  * Key Words, Programmer-defined identifiers, Operators, Punctuation, Syntax
  * Valid identifier names (discussed in 2.5)
* Input, Process, Output
* Programming Process
  1. Clearly define what the program is to do
  2. Visualize the program running on the computer
  3. Use design tools such as a __hierarchy chart__, __flowcharts__, or __pseudocode__ to create a model of the program
  4. Check the model for logical errors
  5. Type the code, save it, and compile it
  6. Correct any errors found during compilation
    * Repeat steps 5-6 as many times as necessary
  7. Run the program with test data for input
  8. Correct any errors found while running the program
    * Repeat steps 5-8 as many times as necessary
  9. Validate the results of the program

## Chapter 2
* Parts of a C++ Program
  * Pre-processor directive ( `#include <>` )
  * Namespace  (`using namespace std;`)
  * Function header  ( `int main() {  }` )
  * Special Characters  ( // # <> () {} " " ; )
* `cout`
  * console
  * `<<` *Stream insertion operator*
  * newline escape sequence `\n` and `endl` stream manipulator
* `#include`
* Variables
  * Variable Definition and initialization
  * Constants
  * Literals
  * Identifier names (can't use key words, has to start with a letter or _)
* Data Types
  * int
    * short, unsigned short, int, unsigned int, long, unsigned long, long long, unsigned long long
    * How many bytes for each of these?
  * char
    * string (`#include <string>`)
    * ASCII codes (Appendix A)
  * Floating-point
    * float, double, long double
    * How many bytes for each of these?
  * Boolean
* Size of a data type
  * `sizeof(var);` or `sizeof(type);`
* Scope
* Arithmetic Operators
  * +, -, *, /, %
  * powers:  `pow(x,2)`
* Comments (`//` for one line, or `/*  */` for multiple lines)
* Programming Style
  * Whitespace, comments, breaking code into lines

## Chapter 3
* `cin`
  * `>>` *Stream extraction operator*
  * Input of multiple values
* Math expressions
  * Order of Operations
  * Associativity
* Type conversion
  * Data Type Ranking (type that holds largest number outranks smaller number)
* Overflow / Underflow
* Type casting (Force a data type)
  * `static_cast<type>(var)`
* Multiple Assignment
  * `x = pow(y=3,2)`
* Combined Assignment
  * `x += 3`
* Formatting the Output
  * `#include <iomanip>`
  * Call every time
    * `setw(n)`, `left` or `right`
  * Call once
    * `fixed`, `showpoint`, `setprecision(n)`
* Working with Characters and Strings
* Math Library
  * `#include <cmath>` for Math functions
  * `#include <cstdlib>` for other libraries, such as random numbers
  * Random number generators (are they really random?)
    * Set the *seed* for the generator: `srand(seed)`
    * Make it more random by basing the seed off of something that changes
      * `#include <ctime>`
      * `seed = time(0);`
      * `srand(seed);`
* Debugging
  * Hand tracing the program with tables