// The Speed of Sound
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

const int AIR   =  1100;
const int WATER =  4900;
const int STEEL = 16400;

int main()
{
    string medium;
    cout << "This program will calculate the amount of time\n"
         << "sound will take to travel through a given medium,\n"
         << "for a given distance.\n";
    cout << "Please select a medium: \n"
         << "    Air\n    Water\n    Steel\n";
    cin  >> medium;
    if (!(medium == "Air" || medium == "Water" || medium == "Steel"))
    {
        cout << "Please try again and enter a valid choice.\n";
        return 0;
    }
    int numFeet;
    cout << "Please enter a distance for the sound\n"
         << "to travel (in feet): ";
    cin  >> numFeet;
    if (!(numFeet > 0))
    {
        cout << "Please try again and enter a valid amount.\n";
        return 0;
    }

    double time;
    if (medium == "Air")
        time = numFeet / AIR;
    else if (medium == "Water")
        time = numFeet / WATER;
    else if (medium == "Steel")
        time = static_cast<double>(numFeet) / STEEL;
    time = round(time * 10000) / 10000;

    cout << "The time it would take sound to travel\n"
         << numFeet << " feet through " << medium << " would be\n"
         << fixed << setprecision(4) << time << " seconds.\n";

    return 0;
}