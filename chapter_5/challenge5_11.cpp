// Random Number Guessing Game Enhancement
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random_number,
        guess,
        count;

    unsigned seed = time(0);

    random_number = rand() % 100 + 1;

    count = 0;
    cout << "I am thinking of a number between 1 and 100.\n";
    cout << "Can you guess what it is? ";
    cin  >> guess;
    while (guess != random_number)
    {
        count++;
        if (guess > random_number)
            cout << "Too high. Try again: ";
        else 
            cout << "Too low. Try again: ";
        cin >> guess;
    }
    cout << "Congratulations. You figured out my number in " << count << " guesses!\n";
    return 0;
}