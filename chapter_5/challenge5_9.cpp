// Membership Fees Increase
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double starting_membership = 2500.0,
           new_membership,
           rate = 0.04;

    int years;

    cout << "This program will display the new membership fees\n";
    cout << "for the next six years, as the rates increase.\n";

    new_membership = starting_membership;

    cout << fixed << showpoint << setprecision(2);
    for (years = 1; years <= 6; years++)
    {
        new_membership = new_membership + new_membership * rate;
        cout << "For year " << years << " the new membership fee will be $";
        cout << new_membership << endl;
    }
}