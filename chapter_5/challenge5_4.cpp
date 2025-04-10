// This program displays a table of Celsius temperatures
// from 0 to 20 degrees and their Fahrenheit equivalents
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int celsius;
    double fahrenheit;

    cout << fixed << showpoint << setprecision(1);
    cout << "Celsius      Fahrenheit\n";
    cout << "-----------------------\n";
    for (celsius = 0; celsius <= 20; celsius++)
    {
        fahrenheit = 9.0/5.0 * celsius + 32;
        cout << setw(4) << celsius  << ".0" << setw(14) << fahrenheit << endl;
    }
    return 0;
}