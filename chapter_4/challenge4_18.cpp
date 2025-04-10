// Spectral Analysis
#include <iostream>
using namespace std;

const double GAMMA_RAYS = 1E-11;
const double X_RAYS = 1E-8;
const double ULTRA_VIOLET = 4E-7;
const double VISIBLE_LIGHT = 7E-7;
const double INFRARED = 1E-3;
const double MICROWAVES = 1E-2;
// Radio waves will be anything higher than microwaves...

int main()
{
    double wavelength;
    cout << "Enter the wavelength in meters of an\n"
         << "electromagnetic wave, in exponential\n"
         << "notation (i.e. 10E-7): ";
    cin  >> wavelength;

    if (wavelength <= GAMMA_RAYS)
        cout << "That is a gamma ray.\n";
    else if (wavelength <= X_RAYS)
        cout << "That is an X-ray.\n";
    else if (wavelength <= ULTRA_VIOLET)
        cout << "That is an ultraviolet wave.\n";
    else if (wavelength <= VISIBLE_LIGHT)
        cout << "That is a visible light wave.\n";
    else if (wavelength <= INFRARED)
        cout << "That is an infrared wave.\n";
    else if (wavelength <= MICROWAVES)
        cout << "That is a microwave.\n";
    else 
        cout << "That is a radiowave.\n";

    return 0;
}