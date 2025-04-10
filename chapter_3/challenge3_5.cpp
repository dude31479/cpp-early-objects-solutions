// Batting average
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double average;
    int times, hits;
    cout << "How many times was the player at bat? ";
    cin >> times;
    cout << "How many hits did he get? ";
    cin >> hits;
    average = static_cast<double>(hits) / times;

    cout << fixed << setprecision(4);
    cout << "Batting average: " << average << endl;
    return 0;
}