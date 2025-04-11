/************************
 *                      *
 *  Test Score Average  *
 *                      *
 ***********************/
#include <iostream>
#include <iomanip>
using namespace std;

#define NUM_TESTS 5

int main()
{
    int score, total = 0;
    double average;

    cout << "This program will calculate the average"
         << "of five test scores" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter score #" << i << ": ";
        cin  >> score;
        total += score;
    }

    average = static_cast<double>(total) / NUM_TESTS;

    cout << fixed << setprecision(1);
    cout << "Your average test score is: ";
    cout << average << "%.\n";
    return 0;
}