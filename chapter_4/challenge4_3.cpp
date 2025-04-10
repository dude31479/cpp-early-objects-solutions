// Magic Dates
#include <iostream>
using namespace std;

/* If a date's month, times its day is equal to its two-digit year,
   then the date will be considered a 'magic date' */

int main()
{
    int month, day, year;

    cout << "Enter a month, day, and year (in this format mm/dd/yy): ";
    cin >> month;
    cin.ignore();
    cin >> day;
    cin.ignore();
    cin >> year;

    if (month * day == year)
        cout << month << "/" << day << "/" << year
             << " is a magic year.\n";
    
    return 0;
}