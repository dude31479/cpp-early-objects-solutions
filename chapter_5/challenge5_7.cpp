// This program will calculate how much someone would
// make if the amount started at one penny on the first
// day and doubled every day that they worked, for a month.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days, pennies = 0;
    double total;

    cout << "Enter the number of days worked this month: ";
    cin  >> days;

    while (days < 0 || days > 31)
    {
        cout << "Enter the number of days worked this month: ";
        cin  >> days;
    }
    
    if (days > 0)
    {
        pennies = 1;
        for (int day = 1; day < days; day++)
        {
            pennies += pennies * 2;
        }
    }
    total = pennies / 100.0;

    cout << fixed << showpoint << setprecision(2);
    cout << "You have earned $" << total << " this month.\n";
    return 0;
}