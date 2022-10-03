/* Welcome to MadLib++! This program will prompt users for inputs,
   then insert the inputs into a pre-generated story.
   The story for this MadLib comes from Shakespeare's Hamlet. 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string noun1, place1, noun2, noun3, noun4;
    string adj1, verb1, adj2, body1, verb2;
    double num1;

    // format input section so lines are all lined up
    cout << "Give me a plural noun: ";
    cin >> noun1;
    cout << "Give me a place:       ";
    cin >> place1;
    cout << "Give me a noun:        ";
    cin >> noun2;
    cout << "Give me a plural noun: ";
    cin >> noun3;
    cout << "Give me a noun:        ";
    cin >> noun4;
    cout << "Give me an adjective:  ";
    cin >> adj1;
    cout << "Give me a verb:        ";
    cin >> verb1;
    cout << "Give me a number:      ";
    cin >> num1;
    cout << "Give me an adjective:  ";
    cin >> adj2;
    cout << "Give me a body part:   ";
    cin >> body1;
    cout << "Give me a verb:        ";
    cin >> verb2;
    cout << endl;
    
    // Here's the story:
    cout << "Two "<< noun1 << ", both alike in dignity,\n";
    cout << "In fair " << place1 << ", where we lay our scene,\n";
    cout << "From ancient " << noun2 << " break to new mutiny,\n";
    cout << "Where civil blood makes civil hands unclean.\n";
    cout << "From forth the fatal loins of these two foes\n";
    cout << "A pair of star-cross`d " << noun3 << " take their life;\n";
    cout << "Whole misadventured piteous overthrows\n";
    cout << "Do with their " << noun4 << " bury their parents` strife.\n";
    cout << "The fearful passage of their " << adj1 << " love,\n";
    cout << "And the continuance of their parents` rage,\n";
    cout << "Which, but their children`s end, nought could " << verb1 << ",\n";
    cout << "Is now the " << num1 << " hours` traffic of our stage;\n";
    cout << "The which if you with " << adj2 << " " << body1 << " Endoskeleton attend,\n";
    cout << "What here shall " << verb2 << ", our toil shall strive to mend.\n\n"; 
}