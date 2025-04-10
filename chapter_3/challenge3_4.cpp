// How much insurance?
// This program advises the user on how much they should
// insure their property for, given the recommended minimum amount
// is 80% of what it would cost to replace it.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double minimum = 0.80;
    double insurance, value;

    cout << "What is your property value? ";
    cin >> value;

    insurance = value * minimum;

    cout << fixed << setprecision(2);
    cout << "The minimum amount of insurance you\n";
    cout << "should purchase is $" << insurance << "." << endl;
    return 0;
}