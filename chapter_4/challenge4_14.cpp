// BMI Calculator
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double bmi, height, weight;

    string weight_group;

    cout << "This program will calculate your BMI\n"
         << "based on your height and weight.\n\n"
         << "Please enter your height (in inches): ";
    cin  >> height;
    if (height <= 0 || height > 84) 
    {
        cout << "Please try again and enter a valid height.\n";
        return 0;
    }
    cout << "Please enter your weight (in pounds): ";
    cin  >> weight;
    if (weight <= 0 || weight > 600)
    {
        cout << "Please try again and enter a valid weight\n";
        return 0;
    }
    bmi = weight * (703/pow(height, 2.0));

    if (bmi < 18.5)
        weight_group = "underweight";
    else if (bmi > 25.5)
        weight_group = "overweight";
    else 
        weight_group = "normal";

    cout << fixed << showpoint << setprecision(2);
    cout << "Your BMI is " << bmi << " which makes you " << weight_group
         << ".\n";

    return 0;
}