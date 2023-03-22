# 2  Introduction to C++
## 2.1 	The Parts of a C++ Program?

__The Parts of a C++ Program__

__The Parts of a C++ Program (2)__
* Comments
* Preprocessor Directive - code to be used by the preprocessor to prepare the program for the compiler
  * `#include` is an indicator that there is another package that needs to be used in the program
    * There are a large number of packages (__modules__) available for a collection of packages (__library__) in compilers and ready to be attached to your program
  * Also called *header files*
  * `#include <iostream>` tells the program to attach a program called "iostream"
    * The `< >` indicate that it is a standard C++ file
* Namespace
  * In programs, we use Variables (Ch 2), Functions (Ch 6), and Objects (Ch 13), among others. These elements require *names*.
  * A __namespace__ is a tool to organize the names we work with
  * `using namespace std;` means we are going to use a namespace that is names "std"
    * The `<iostream>` file uses the "std" namespace, so we have to include it in these programs
* Functions are groups of code that can referred to at various stages of a program. 
  * Example:
    ```C++
    int main()
    {
      cout << sum(3,6);
    }

    int sum(int val1, int val2)
    {
      return val1 + val2;
    }
    ```
  * This is helpful to automate common tasks
  * The `int main()` is itself a function. In fact, it's the primary function of the entire program.
      * `int` stands for "integer". This function will return an integer back to the system
      * The `int main()` function is required in every function
* The braces `{ }` indicate the contents of a function
  * Make sure each brace has a closing brace
* `cout << " "` is the command issued by the `main` function
  * The `cout` and `<<` commands will be discussed later
  * Each command must end with a `;`
* `return` gives back what the computer is looking for in each function
  * Since we declared the main function as `int main()`, the computer is looking for an integer as the result of the function
  * `return 0;` returns a value to the computer when everything is complete
  * `0` is a computer indicator that the function completed successfully

## 2.2  The `cout` Object
__The `cout` Object__
* `cout` is short for " Console OUTput"
  * A console refers to a space where users of early computers could interact with users
  * `cout` is a *stream object*, meaning it is used to stream the data in some sort of flow.
* the `<<` operator is a *stream insertion operator*, because it inserts some object into the stream object

__The `cout` Object (2)__
* The `<<` stream insertion operator can send more than one object at a time to the `cout` object

__The `cout` Object (3)__
* These two lines will be printed on one line unless otherwise indicated

__The `endl` Manipulator__
* There are two ways to make a line break in C++
* The first is to stream an endline command [`endl`] into the `cout` object
  ```c++
  cout << "Programming is " << endl << "great fun!";
  ```

__The `endl` Manipulator (2)__

__The `endl` Manipulator (3)__
* The `endl` command should not be in quotes (" ")

__The `\n` Escape Sequence__
* The other way to make a line break in C++ is with a __newline escape__
  * The `\n` command *must* be in quotes

## 2.3  The `#include` Directive
__The `#include` Directive__
* `iostream` is short for "input-output stream library"
  * It is not part of the computer's core library

## 2.4  Variables, Literals, and Assignment Statements

## 2.5  Identifiers

## 2.6