// Running the Race
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string runner1, runner2, runner3;
    int time1, time2, time3;
    string winner, second, third;

    cout << "Enter the name of runner 1: ";
    cin  >> runner1;
    cout << "Enter runner 1's race time: ";
    cin  >> time1;
    
    cout << "Enter the name of runner 2: ";
    cin  >> runner2;
    cout << "Enter runner 2's race time: ";
    cin  >> time2;

    cout << "Enter the name of runner 3: ";
    cin  >> runner3;
    cout << "Enter runner 3's race time: ";
    cin  >> time3;

    if (time1 < time2 && time2 < time3)
    {
        winner = runner1;
        second = runner2;
        third = runner3;
    }
    else if (time1 < time3 && time3 < time2)
    {
        winner = runner1;
        second = runner3;
        third = runner2;
    }
    else if (time3 < time1 && time1 < time2)
    {
        winner = runner3;
        second = runner1;
        third = runner2;
    }
    else if (time3 < time2 && time2 < time1)
    {
        winner = runner3;
        second = runner2;
        third = runner1;
    }
    else if (time2 < time3 && time3 < time1)
    {
        winner = runner2;
        second = runner3;
        third = runner1;
    }
    else if (time2 < time1 && time1 < time3)
    {
        winner = runner2;
        second = runner1;
        third = runner3;
    }

    cout << winner << " wins!\n"
         << second << " is second place!\n"
         << "and " << third << " is last.\n";

    return 0;

}