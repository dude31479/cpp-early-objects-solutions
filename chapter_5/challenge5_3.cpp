// This program calculates the distance traveled for each
// hour of a journey.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hours, mph, distance;

    cout << "What is the speed of the vehicle in mph? ";
    cin  >> mph;
    cout << "How many hours has it traveled? ";
    cin  >> hours;

    cout << "Hour      Miles Traveled\n";
    cout << "--------------------------------\n";
    for (int count = 1; count <= hours; count++)
    {
        cout << setw(4) << count;
        distance = count * mph;
        cout << setw(14) << distance << endl;
    }
    return 0;
}