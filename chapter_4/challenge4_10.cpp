/********************************
 *      BANK CHARGES            *
 *                              *
 *  This program calculates a   *
 *  bank customer's monthly     *
 *  banking and check-cashing   *
 *  fees.                       *
 *                              *
 *******************************/
#include <iostream>
#include <iomanip>
using namespace std;

const int MONTHLY_FEE = 10;

int main()
{
    int numChecks;
    double fees, checking_fee = 0.0;

    cout << "This program will calculate your\n"
         << "monthly banking and check-cashing\n"
         << "fees for the past month.\n";
    cout << "Enter the number of checks written\n"
         << "in the previous month: ";
    cin  >> numChecks;

    if (numChecks < 0)
        cout << "Please enter a valid amount.\n";
    else if (numChecks > 0 && numChecks < 20)
        checking_fee = 0.1;
    else if (numChecks < 40)
        checking_fee = 0.08;
    else if (numChecks < 60)
        checking_fee = 0.06;
    else
        checking_fee = 0.04;
    
    fees = static_cast<double>(numChecks) * checking_fee + MONTHLY_FEE;

    cout << fixed << showpoint << setprecision(2);
    cout << "\nYour total fees for the month are $" << fees << ".\n";

    return 0;
}