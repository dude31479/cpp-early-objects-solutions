// This program asks the user for a positive integer and then 
// uses a loop to sum up all of the integers from 1 to the number
// entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int num, limit, total;
    limit = total = 0;

    while (limit < 1)
    {
        cout << "Enter a positive integer: ";
        cin  >> limit;
    }
    for (num = 1; num <= limit; num++)
        total += num;
    cout << "\nThe sum of all positive integers from 1\n";
    cout << "through " << limit << " is " << total << ".\n\n";
    return 0;
}