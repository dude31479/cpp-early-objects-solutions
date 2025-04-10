// Interest Earned
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    double principal, interest, amount;
    int compounded;
    // Get the principal, interest rate, and the 
    // number of times interest is compounded
    cout << "Enter the Principal in your savings account: ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> interest;
    cout << "Enter the number of times the interest is\n";
    cout << "compounded in a year: ";
    cin >> compounded;

    amount = principal * pow(1 + ((interest/100)/compounded), compounded);

    cout  << fixed << setprecision(2); 
    cout << left << setw(20) << "Interest Rate: ";
    cout << right << setw(9) << interest << left << "%\n";
    cout << left << setw(20) << "Times Compounded: ";
    cout << right << "$" << setw(8) << compounded << endl;
    cout << left << setw(20) << "Principal: ";
    cout << right << "$" << setw(8) << principal << endl;
    cout << left << setw(20) << "Interest: ";
    cout << right << "$" << setw(8) << (amount - principal) << endl;
    cout << left << setw(20) << "Final Balance: ";
    cout << right << "$" << setw(8) << amount << endl;
    return 0;
}