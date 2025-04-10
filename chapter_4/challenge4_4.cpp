// Areas of Rectangles
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double length, width, area1, area2;

    cout << "This program calculates the areas of two rectangles\n"
         << "and will tell you which one is bigger or if they\n"
         << "are the same size.\n"
         << "Enter the length and width of the first rectangle\n"
         << "separated by a space: ";
    cin  >> length >> width;
    if (length <= 0 || width <= 0) {
        cout << "Re-run the program with valid input.\n";
        return 0;
    }
    area1 = length * width;

    cout << "Enter the length and width of the second rectangle\n"
         << "also separated by another space: ";
    cin  >> length >> width;
    if (length <= 0 || width <= 0) {
        cout << "Re-run the program with valid input.\n";
        return 0;
    }
    area2 = length * width;

    cout << fixed << setprecision(2);

    if (area1 == area2)
        cout << "Both rectangles have an area of " << area1 << endl;
    else if (area1 > area2) {
        cout << "The first rectangle's area is " << area1 << " and is\n"
             << "larger than the second's, which is " << area2 << ".\n";
    }
    else if (area2 > area1) {
        cout << "The second rectangle is " << area2 << " and\nis larger than the"
             << "first, which is " << area1 << ".\n";
    }
    return 0;

}