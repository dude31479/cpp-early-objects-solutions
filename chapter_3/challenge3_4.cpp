/***************************************************
 *                                                 *
 *              HOW MUCH INSURANCE                 *
 *                                                 *
 *      The recommended minimum that a             *
 *      homeowner should insure their property     *
 *      for is 80% of their home's value. This     *
 *      program accepts an input from the user     *
 *      and calculates the recommended minimum     *
 *      amount they should purchase in insurance.  *
 *                                                 *
 **************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double recommended_minimum = 0.80;
    double insurance, value;

    // Get the property's value
    cout << "What is your property value? ";
    cin >> value;

    insurance = value * recommended_minimum;

    cout << fixed << setprecision(2);
    cout << "The minimum amount of insurance you\n";
    cout << "should purchase is $" << insurance << "." << endl;
    return 0;
}