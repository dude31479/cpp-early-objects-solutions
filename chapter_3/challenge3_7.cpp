/****************************
 *                          *
 *      Average Rainfall    *
 *                          *
 * *************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string month;

    double rain, 
           total = 0, 
           avg = 0;

    cout << "\nThis program calculates the average rainfall of three consecutive months.\n";
    
    string output = "The average monthly rainfall for ";

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter month " << (i+1) << ": ";
        cin  >> month;
        cout << "What was the amount of rain in " << month << "? ";
        cin  >> rain;
        cin.get();
        total += rain;
        if (i < 2) 
        {
            output += month + ", ";
        }
        else 
        {
            output += "and " + month;
        }
    }

    avg = total / 3;

    cout << output;
    cout << " was " << fixed << setprecision(2) << avg << " inches.\n";
    return 0;
}