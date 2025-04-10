// The Greatest and Least of These
#include <iostream>
using namespace std;

int main()
{
    int number,
        smallest,
        largest;

    cout << "Enter some integers, followed by -99 to quit, and I\n";
    cout << "will tell you which is the smallest and largest.\n\n";
    cout << "> ";
    cin  >> number;
    smallest = largest = number;
    while (1)
    {
        cout << "> ";
        cin  >> number;
        if (number == -99)
            break;
        else if (number < smallest)
            smallest = number;
        else if (number > largest)
            largest = number;
    }
    cout << "\nOut of the integers you entered, " << smallest << " was the smallest\n";
    cout << "and " << largest << " was the largest.\n";
    return 0;
}