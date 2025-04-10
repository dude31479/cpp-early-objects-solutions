// Freezing and Boiling Points
#include <iostream>
#include <string>
using namespace std;

const int ALCOHOL_FREEZING_POINT = -173;
const int MERCURY_FREEZING_PONT = -38;
const int OXYGEN_FREEZING_POINT = -362;
const int WATER_FREEZING_POINT = 32;

const int ALCOHOL_BOILING_POINT = 172;
const int MERCURY_BOILING_POINT = 676;
const int OXYGEN_BOILING_POINT = -306;
const int WATER_BOILING_POINT = 212;

int main()
{
    bool freezing = false, boiling = false;
    double temperature;
    string message;

    cout << "This program will accept a given temperature and\n"
         << "tell the user which liquids will freeze or boil\n"
         << "at that temperature.\nPlease enter a temperature: ";
    cin  >> temperature;

    message = "At the given temperature";
    
    if (temperature <= 32)
        freezing = true;
    if (temperature >= -306)
        boiling = true;
    if (temperature <= ALCOHOL_FREEZING_POINT)
        message += ", alcohol";
    if (temperature <= MERCURY_FREEZING_PONT)
        message += ", mercury";
    if (temperature <= OXYGEN_FREEZING_POINT)
        message += ", oxygen";
    if (temperature <= WATER_FREEZING_POINT)
        message += ", water";
    if (freezing) 
        message += " will freeze";
    if (boiling && freezing)
        message += " and";
    if (temperature >= ALCOHOL_BOILING_POINT)
        message += ", alcohol";
    if (temperature >= MERCURY_BOILING_POINT)
        message += ", mercury";
    if (temperature >= OXYGEN_BOILING_POINT)
        message += ", oxygen";
    if (temperature >= WATER_BOILING_POINT)
        message += ", water";
    if (boiling)
        message += " will boil";
    message += ".\n";

    cout << message;
    return 0;
}