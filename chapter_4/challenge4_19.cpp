// Long-Distance Calls
#include <iostream>
#include <iomanip>
using namespace std;

const double EARLY_CALL = 0.12;
const double DAYTIME_CALL = 0.55;
const double LATE_CALL = 0.35;

int main()
{
    double startTime, callLength, seconds, minutes, cost;
    cout << "This program will determine the price of a phone call\n" 
         << "based on the time of the call and its length.\n";
    cout << "Early morning calls are $0.12 per minute,\n"
         << "calls made throughout the day are $0.55 per minute,\n"
         << "and calls made after 7:00pm are $0.35 per minute.\n";
    cout << "Please enter the time you made the call, in\n"
         << "in the following format HH.MM: ";
    cin  >> startTime;
    cout << "Please enter the length of the call (HH.MM): ";
    cin  >> callLength;

    minutes = startTime - static_cast<int>(startTime);
    seconds = callLength - static_cast<int>(callLength);

    if (startTime < 0.0 || startTime > 23.59 || callLength < 0.0 ||
        minutes > 59 || seconds > 59) {
        cout << "Please run the program again and input a valid time.\n";
        return 0;
    }

    if (startTime <= 6.59) 
        cost = callLength * EARLY_CALL;
    else if (startTime <= 19.00)
        cost = callLength * DAYTIME_CALL;
    else 
        cost = callLength * LATE_CALL;

    cout << fixed << setprecision(2);
    cout << "The total cost for your call will be $"
         << cost << ".\n";

    return 0;
}