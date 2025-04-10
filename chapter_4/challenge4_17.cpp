// The Speed of Sound in Gases
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

const double CARBON_DIOXIDE = 258.0;
const double AIR = 331.5;
const double HELIUM = 972.0;
const double HYDROGEN = 1270.0;

int main()
{
    int choice;
    double time, distance;
    cout << "This program will calculate how far sound has\n"
         << "traveled through a given gas, in a given\n"
         << "amount of time.\n";
    cout << "Which gas did the sound travel through?\n"
         << "1. Carbon Dioxide\n2. Air\n3. Helium\n4. Hydrogen\n\n";
    cin  >> choice;
    if (choice < 1 || choice > 4) {
        cout << "Please try again and enter a valid choice.\n";
        return 0;
    }
    cout << "Enter the amount of time the sound traveled\n"
         << "through the gas: ";
    cin  >> time;
    if (time <= 0.0) {
        cout << "Please try again and enter a valid time.\n";
        return 0;
    }
    switch (choice)
    {
        case 1: distance = time * CARBON_DIOXIDE; break;
        case 2: distance = time       *       AIR; break;
        case 3: distance = time     *      HELIUM; break;
        case 4: distance = time    *     HYDROGEN; break;
    }
    cout << "The distance that the sound traveled was "
         << distance << " feet.\n";
    return 0;
}