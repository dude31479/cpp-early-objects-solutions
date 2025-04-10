// Internet Service Provider Part 1
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double PACKAGE_A_MONTHLY_FEE = 9.95;
const double PACKAGE_B_MONTHLY_FEE = 14.95;
const double PACKAGE_C_MONTHLY_FEE = 19.95;

const int PACKAGE_A_CALL_TIME_PROVIDED = 5;
const int PACKAGE_B_CALL_TIME_PROVIDED = 10;

const double PACKAGE_A_ADDITIONAL_USAGE = 0.08;
const double PACKAGE_B_ADDITIONAL_USAGE = 0.06;

int main()
{
    string name;
    int hours;
    char package;
    double price;

    cout << "This program will calculate your monthly internet bill.\n"
         << "Please enter your full name: ";
    getline(cin, name);
    cout << "Please indicate which package you currently have (A, B, or C): \n"
         << "Package A - $9.95 per month with 5 hours of call time provided\n"
         << "            Additional usage costs $0.08 per minute.\n"
         << "Package B - $14.95 per month with 10 hours of call time provided\n"
         << "            Additional usage costs $0.06 per minute.\n"
         << "Package C - $19.95 per month with unlimited call time provided\n"; 
    cin  >> package;

    if (!(package == 'A' || package == 'B' || package == 'C'))
    {
        cout << "Please try again and enter a valid selection.\n";
        return 0;
    }

    cout << "Please enter the number of hours used: ";
    cin  >> hours;
    if (!(hours >= 0))
    {
        cout << "Please try again and enter a valid number of hours.\n";
        return 0;
    }

    cout << name << ", "
         << "your total cost for internet for the past month with ";

    switch (package)
    {
        case 'A':   
            cout << "Package A";
            if (hours > PACKAGE_A_CALL_TIME_PROVIDED) {
                price = PACKAGE_A_MONTHLY_FEE + (hours - PACKAGE_A_CALL_TIME_PROVIDED) * PACKAGE_A_ADDITIONAL_USAGE;
            }
            else
                price = PACKAGE_A_MONTHLY_FEE;
            break;
        case 'B':
            cout << "Package B";
            if (hours > PACKAGE_B_CALL_TIME_PROVIDED) {
                price = PACKAGE_B_MONTHLY_FEE + (hours - PACKAGE_B_CALL_TIME_PROVIDED) * PACKAGE_B_ADDITIONAL_USAGE;
            }
            else
                price = PACKAGE_B_MONTHLY_FEE;
        case 'C':
            cout << "Package C";
            price = PACKAGE_C_MONTHLY_FEE;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << ",\nwith " << hours << " hours of usage, will be $"
         << price << ".\n";

    return 0;
}