#include <iostream>
using namespace std;

int main()
{
    int x;       // Number of pizzas
    int age;     // See if customer is a senior citizen
    float price; // Total price of x pizzas

    // Input - Get number of pizzas
    cout << "How many pizzas are you ordering today? ";
    cin >> x;

    // Input - Get the customer's age
    cout << "What is your age? ";
    cin >> age;

    // Test for the discount
    if (x >= 20)
    {
        cout << "You got a discount!\n";
        price = 8 * x;
        if (age >= 55)
            price *= 0.80;
    }
    else
    {
        cout << "If you buy " << 20-x;
        cout << " more pizzas, you will get a discount." << endl;
        price = 10 * x;
        if (age >= 55)
            price *= 0.80;
    }

    // Output the total price
    cout << "Your bill comes to $" << price << endl;
}