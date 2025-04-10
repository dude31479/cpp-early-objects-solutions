// How many pizzas?
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

int main()
{
    const int slices_per_person = 4;
    double diameter, area, slice = 14.125;
    int people, pizzas, num_slices, slices_needed;

    cout << "How many people will be at the pizza party? ";
    cin >> people;

    cout << "What will be the diameter of the pizzas? ";
    cin >> diameter;

    slices_needed = people * slices_per_person;

    area = PI * pow(0.5*diameter, 2);

    num_slices = area / slice;

    pizzas = static_cast<double>(slices_needed) / num_slices;

    cout << "A pizza with a diameter of " << diameter << " inches\n";
    cout << "would have " << num_slices << " slices.\n";
    cout << "You would need " << pizzas << " pizzas for " << people << " people\n";
    return 0;
}