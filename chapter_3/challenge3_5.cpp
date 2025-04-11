/*************************************
 *                                   *
 *          Batting Average          *
 *                                   *
 *  This is a simple program that    *
 *  calculates a batting average by  *
 *  typecasting an int to a double.  *
 *                                   *
 ************************************/
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    
    double batting_average;
    int    hits, at_bat;

    cout << "This program will calculate a player's\n"
         << "batting average for a single game.\n\n";

    cout << "How many times was the player at bat? ";
    cin  >> at_bat;
    cout << "How many hits did the player get? ";
    cin  >> hits;

    batting_average = static_cast<double>(hits) / at_bat;

    cout << fixed << setprecision(4);
    cout << "Out of " << at_bat << " times at bat,\n"
         << "the player's batting average was " 
         << batting_average << ".\n";
    return 0;
}