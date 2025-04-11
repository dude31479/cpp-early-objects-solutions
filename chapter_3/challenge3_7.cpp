// Average Rainfall
// This program calculates the three month average rainfall
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string month1, month2, month3;
    double rain1, rain2, rain3, total, avg;

    cout << "This program calculates the average rainfall of three consecutive months.\n";
    cout << "Enter month 1: ";
    getline(cin, month1);
    cout << "What was the amount of rain in " << month1 << "? " << endl;
    cin >> rain1;
    cin.get();
    cout << "Enter month 2: ";
    getline(cin, month2);
    cout << "What was the amount of rain in " << month2 << "? " << endl;
    cin >> rain2;
    cin.get();
    cout << "Enter month 3: ";
    getline(cin, month3);
    cout <<"And how much rain was there in " << month3 << "? " << endl;
    cin >> rain3;
    cin.get();

    total = rain1 + rain2 + rain3;
    avg = total / 3;

    cout << "The average monthly rainfall for " << month1
         << ", " << month2 << ", and " << month3;
    cout << " was " << fixed << setprecision(2) << avg << " inches.\n";
    return 0;
}