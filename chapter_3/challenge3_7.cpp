/****************************
 *                          *
 *      Average Rainfall    *
 *                          *
 * *************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define NUM_MONTHS 3

int main()
{
    string month;

    double rain, 
           total = 0, 
           avg = 0;

    cout << "\nThis program calculates the average rainfall of three consecutive months.\n";
    
    string output = "The average monthly rainfall for ";

    for (int count = 1; count <= NUM_MONTHS; count++)
    {
        cout << "Enter month " << count << ": ";
        cin  >> month;
        cout << "What was the amount of rain in " << month << "? ";
        cin  >> rain;
        cin.get();
        total += rain;
        if (count < NUM_MONTHS) 
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