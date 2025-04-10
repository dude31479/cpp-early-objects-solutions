// Geometry Caclulator
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double length, width, diameter, radius, area;

    cout << "\nGeometry Calculator\n\n";
    cout << "   1. Calculate the Area of a Circle\n"
         << "   2. Calculate the Area of a Rectangle\n"
         << "   3. Calculate the Area of a Triangle\n"
         << "   4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin  >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Please run the program again and input\n"
             << "a valid choice.\n";
    }

    if (choice == 1)
    {
        cout << "Enter the diameter of the circle: ";
        cin  >> diameter;
        if (diameter < 0) 
        {
            cout << "Please run the program again and input\n"
                 << "a valid diameter.\n";
        }
        radius = diameter / 2;
        area = 3.14159 * pow(radius, 2.0);
        cout << "The area of a circle with a diameter of\n"
             << diameter << " is " << area << ".\n";
    }
    else if (choice == 2)
    {
        cout << "Enter the length and width of the rectangle\n"
             << "separated by a space: ";
        cin  >> length >> width;
        if (length <= 0 || width <= 0)
        {
            cout << "Please run the program again and input\n"
                 << "a valid number for length and for width.\n";
        }
        area = length * width;
        cout << "The area of a rectangle with a length of\n"
             << length << " and a width of " << width << " is " << area
             << ".\n";
    }
    else if (choice == 3)
    {
        cout << "Enter the base and height of the triangle\n"
             << "separated by a space: ";
        cin  >> length >> width;
        area = (length / 2) * width;
        cout << "The area of a triangle with a base of " << length 
             << "\nand a height of " << width << " is " << area 
             << ".\n";
    }

    return 0;
}