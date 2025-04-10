// This program displays a table showing how much the Earth's oceans
// will have risen in the next 25 years (in mm), assuming a rate of
// 3.1mm per year
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int years;
    double rate = 3.1,
    total = 0.0;

    cout << fixed << showpoint << setprecision(1);
    cout << "Years Elapsed    Ocean Level Rise (mm)\n";
    cout << "--------------------------------------\n";
    for (years = 1; years <= 25; years++)
    {
        total += rate;
        cout << setw(6) << years << setw(22) << total
             << endl;
    }
    return 0;
}