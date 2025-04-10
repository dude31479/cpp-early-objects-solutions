// Test Average
#include <iostream>
#include <iomanip>
using namespace std;

#define NUM_TESTS 5

int main()
{
    int score1, score2, score3, 
        score4, score5, total;
    double average;

    cout << "Enter the first test score: ";
    cin >> score1;
    cout << "Enter the second test score: ";
    cin >> score2;
    cout << "Enter the third test score: ";
    cin >> score3;
    cout << "Enter the fourth test score: ";
    cin >> score4;
    cout << "Enter the fifth test score: ";
    cin >> score5;

    total = score1 + score2 + score3 + score4 + score5;
    average = static_cast<double>(total) / NUM_TESTS;

    cout << fixed << setprecision(1);
    cout << "Your average test score is: ";
    cout << average << "%.\n";
    return 0;
}