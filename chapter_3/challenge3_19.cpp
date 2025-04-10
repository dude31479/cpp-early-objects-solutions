// Pizza Slices
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

int main()
{
    double diameter, area, slice = 14.125;
    int num_slices;

    cout << "What is the diameter of the pizza? ";
    cin >> diameter;

    area = PI * pow((0.5 * diameter), 2);
    num_slices = area / slice;

    cout << "A pizza with a diameter of " << diameter << endl;
    cout << "will have " << num_slices << " slices" << endl;
    return 0;
}