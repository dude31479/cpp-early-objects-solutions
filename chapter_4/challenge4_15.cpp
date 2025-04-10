// Fat Gram Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int calories, fat_grams, calories_from_fat;
    double percentage;

    cout << "Please enter the number of calories in a food: ";
    cin  >> calories;
    cout << "Now enter the number of grams of fat in the food: ";
    cin  >> fat_grams;

    calories_from_fat = fat_grams * 9;
    percentage = static_cast<double>(calories_from_fat) / calories;

    cout << fixed << setprecision(0);
    cout << "Your food is " << (percentage * 10) << "% fat.\n";
    return 0;
}