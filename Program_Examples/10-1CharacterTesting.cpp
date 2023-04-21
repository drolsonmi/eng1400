#include <iostream>
#include <cctype>
using namespace std;

int main()
{
        char a = 'a';

        if (isalpha(a))
                cout << "Character  : Yes\n";
        else
                cout << "Character  : No\n";

        if (isalnum(a))
                cout << "Alpha/Num  : Yes\n";
        else
                cout << "Alpha/Num  : No\n";

        if (isdigit(a))
                cout << "Digit      : Yes\n";
        else
                cout << "Digit      : No\n";

        if (islower(a))
                cout << "LowerCase  : Yes\n";
        else
                cout << "LowerCase  : No\n";

        if (isupper(a))
                cout << "UpperCase  : Yes\n";
        else
                cout << "UpperCase  : No\n";

        if (isprint(a))
                cout << "Printable  : Yes\n";
        else
                cout << "Printable  : No\n";

        if (ispunct(a))
                cout << "Punctuation: Yes\n";
        else
                cout << "Punctuation: No\n";

        if (isspace(a))
                cout << "Space      : Yes\n";
        else
                cout << "Space      : No\n";


}
