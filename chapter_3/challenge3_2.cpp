// Stadium Seating
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double CLASS_A = 15.00,
                 CLASS_B = 12.00,
                 CLASS_C = 9.00;

    double total = 0;
    int amount;

    cout << fixed << setprecision(2);
    cout << "\nThis program calculates the total ticket sales for a stadium.\n";
    cout << "Class A tickets cost $" << CLASS_A << endl;
    cout << "Class B tickets cost $" << CLASS_B << endl;
    cout << "Class C tickets cost $" << CLASS_C << endl;
    cout << endl;

    // Get the number of tickets sold for each class
    cout << "How many Class A seating tickets were sold? ";
    cin >> amount;
    total += amount * CLASS_A;
    cout << "How many Class B seating tickets were sold? ";
    cin >> amount;
    total += amount * CLASS_B;
    cout << "How many Class C seating tickets were sold? ";
    cin >> amount;
    total += amount * CLASS_C;

    // Display the results
    cout << "The total amount of ticket sales is $" << total << endl;
    cout << endl;
    return 0;
}