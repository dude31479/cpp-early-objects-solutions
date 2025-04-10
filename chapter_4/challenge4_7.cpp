
#include <iostream>
using namespace std;

/***********************************************
 *                                             *
 *              TIME CALCULATOR                *
 *                                             *
 *  This program will calculate the number of  *
 *  days, hours, minutes, and seconds that are *
 *  in a given amount of seconds.              *
 **********************************************/

// Set up ye olde constants
const int    SECONDS_IN_A_DAY  = 86400;
const int  SECONDS_IN_AN_HOUR  =  3600;
const int SECONDS_IN_A_MINUTE  =    60;

int main()
{
    int    time, // <- User input

           days, // <---//         ************        
          hours,        //-| Calculated      ****
        minutes,        //-| Variables      ***
        seconds; // <---//      ** * * **** *

    // Get the total number of seconds from the user
    cout << "Enter a number of seconds and this program will\n"
         << "calculate the number of days, hours, minutes\n"
         << "and seconds it is, total: ";
    cin  >> time;

    // Calculate the number of days
    days = time / SECONDS_IN_A_DAY;
    time %= SECONDS_IN_A_DAY;

    // Calculate the number of hours
    hours = time / SECONDS_IN_AN_HOUR;
    time %= SECONDS_IN_AN_HOUR;

    // Calculate the remaining minutes and seconds
    minutes = time / SECONDS_IN_A_MINUTE;
    seconds = time % SECONDS_IN_A_MINUTE;

    // Display the output
    if (days > 0)
    {
        cout << days;
        if (days == 1)
            cout << " day";
        else
            cout << " days";
    }
    if (hours > 0)
    {
        if (days > 0)
            cout << ",";
        cout << hours;
        if (hours == 1)
            cout << " hour";
        else
            cout << " hours";
    }
    if (minutes > 0)
    {
        if ((days > 0 || hours > 0) && seconds == 0)
            cout << " and ";
        else
            cout << ",";
        cout << minutes;
        if (minutes == 1)
            cout << " minute";
        else 
            cout << " minutes";
    }
    if (seconds > 0)
    {
        cout << " and " << seconds;
        if (seconds == 1)
            cout << " second";
        else
            cout << " seconds";
    }

    cout << ".\n";

    return 0;
}