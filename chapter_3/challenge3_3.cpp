// Housing costs
// This program wil calculate the monthly and annual costs of the combined bills:
// - rent or mortgage payments
// - utilities
// - phones
// - cable
#include <iostream>
#include <iomanip>
using namespace std;

#define MONTHS 12

int main()
{
    double rent, utilities, phone, cable;
    double monthly = 0, annual;

    cout << "This program will calculate your monthly and annual total bills.\n";

    // Get the monthly bills
    cout << "How much do you pay in rent/mortgage payments, each month? ";
    cin >> rent;
    
    cout << "How much do you pay for utilities? ";
    cin >> utilities;

    cout << "How much is your phone bill? ";
    cin >> phone;

    cout << "And how much do you pay for cable? ";
    cin >> cable;

    // Calculate the monthly and yearly totals
    monthly = rent + utilities + phone + cable;
    annual = monthly * MONTHS;

    double total_rent = rent * MONTHS, 
           total_utilities = utilities * MONTHS,
           total_phone = phone * MONTHS, 
           total_cable = cable * MONTHS;

    
    // Display the amounts
    cout << fixed << setprecision(2);
    cout << "Your monthly bills are: $" << monthly << " per month.\n";
    cout << "And your annual bills are: $" << annual << ".\n";
    cout << "In total, you pay $" << total_rent << " in rent,\n";
    cout << "$ " << total_utilities << " for utilities,\n";
    cout << "$ " << total_phone << " for your phone, and\n";
    cout << "$ " << total_cable << " for cable, each year.\n";

    return 0;
}