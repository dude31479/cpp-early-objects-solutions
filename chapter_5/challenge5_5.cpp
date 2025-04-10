// This program displays a table of speeds in kph
// converted to mph
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int kph;
    double mph;

    cout << fixed << showpoint << setprecision(1);
    cout << "Kilometers per Hour    Miles per Hour\n";
    cout << "-------------------------------------\n";
    for (kph = 40; kph <= 120; kph += 5)
    {
        mph = kph * 0.6214;
        cout << setw(8) << kph << ".0" << setw(20) << mph << endl;
    }
    return 0;
}