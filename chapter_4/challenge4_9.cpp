// Software Sales
#include <iostream>
using namespace std;

int main()
{
    int units;

    cout << "Thank you for choosing our software!\n"
         << "How many units would you like to purchase? ";

    cin  >> units;

    if (units < 0) {
        cout << "Please enter a valid number of units.\n";
    }
    else if (units == 0) {
        cout << "Sorry you do not want to purchase any\n"
             << "software today...\n";
    }
    else {
        if (units < 20)
            cout << "You get a 20% discount!\n";
        else if (units < 50)
            cout << "You get a 30% discount!\n";
        else if (units < 100)
            cout << "You get a 40% discount!\n";
        else
            cout << "You get a 50% discount!\n";
    }
    return 0;

}