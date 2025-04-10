// Calories Burned
#include <iostream>
#include <iomanip>
using namespace std;

const double CALORIES_PER_MINUTE = 3.9;

int main()
{
    int minutes;
    double calories = 0.0;

    cout << fixed << showpoint << setprecision(1);
    for (minutes = 10; minutes <= 30; minutes += 5)
    {
        calories = CALORIES_PER_MINUTE * minutes;
        cout << "\nAfter " << minutes << " minutes, you will have";
        cout << " burned " << calories << " calories.\n";
    }
    return 0;
}