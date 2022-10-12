// This program is carefully constructed to use the "fallthrough" 
// feature of the switch statement.
// Adapted from Pr4-25.cpp from the textbook
#include <iostream>
using namespace std;

int main()
{
   int modelNum;  // Model number
   bool passed = false;

   while(!passed)
   {
        // Get a model number from the user.
        cout << "Our TVs come in three models:\n";
        cout << "The 100, 200, and 300. Which do you want? ";
        cin >> modelNum;
   
        // Display the model's features.
        cout << "\nThat model has the following features:\n";
        switch (modelNum)
        {
            case 300: 
            {
                cout << "\tPicture-in-a-picture.\n";
                // Don't want a break here - includes 200 and 100 features
            }
            case 200: 
            {
                cout << "\tStereo sound.\n";
            }
            case 100: 
            {
                cout << "\tRemote control.\n";
                passed = true;
                break;
            }
            default:  
            {
                cout << "\nYou can only choose the 100,";
                cout << "200, or 300.\n\n";
            }
        }
   }
   return 0;
} 