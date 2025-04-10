// Change for a Dollar Game
#include <iostream>
using namespace std;

const int PENNY   =  1;
const int NICKEL  =  5;
const int DIME    = 10;
const int QUARTER = 25;

int main()
{
    // The user's coins
    int pennies, 
        nickels, 
        dimes, 
        quarters;
        
    // Calculated amounts    
    int dollars, 
        cents, 
        total;

    cout << "This program will add up your change and tell you how\n"
         << "much you have in dollars.\n";

    // Get the number of each coin that the user has
    cout << "Enter the number of pennies that you have: ";
    cin  >> pennies;
    cout << "Enter the number of nickels: ";
    cin  >> nickels;
    cout << "Enter the number of dimes: ";
    cin  >> dimes;
    cout << "Enter the number of quarters: ";
    cin  >> quarters;

    // Input validation
    if (pennies < 0 || nickels < 0 || dimes < 0 || quarters < 0)
    {
        cout << "You can't have negative change! Re-run the program\n"
             << "with valid input!\n";
        return 0;
    }

    // Calculate the total
    total   = pennies * PENNY + nickels * NICKEL;
    total   += dimes * DIME + quarters * QUARTER;

    // Calculate the dollars and change
    dollars = total / 100;
    cents = total % 100;

    // Display the result
    if (dollars == 1 && cents == 0)
    {
        cout << "You have exactly ONE dollar!\n";
    }
    else
    {
        cout << "You have ";
        
        if (dollars > 0)
        {
            cout << "$" << dollars;
            if (dollars == 1)
                cout << " dollar";
            else
                cout << " dollars";
        }

        if (cents > 0)
        {
            if (dollars > 0)
                cout << " and ";
            if (cents == 1)
                cout << cents << " cent";
            else
                cout << cents << " cents";
        }

        cout << ".\n";
    }

    return 0;
}