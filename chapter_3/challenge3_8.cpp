/************************************************************
 *                                                          *
 *                      BOX OFFICE                          *
 *  This program will ask the user for the name of a movie  *
 *  and how many adult and child tickets were sold, then    *
 *  calculate the gross and net profit for a theater when   *
 *  the distributor takes 80%                               *
 *                                                          *
 * *********************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double CHILD_PRICE = 3.00,
                 ADULT_PRICE = 6.00;
    
    int child_tickets, adult_tickets;

    double gross_profit, net_profit, distributor_price;

    string movie_title;
    
    cout << "Enter the movie's title: ";
    getline(cin, movie_title);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adult_tickets;
    cin.get();

    cout << "Enter the number of child tickets sold: ";
    cin >> child_tickets;
    cin.get();

    gross_profit = CHILD_PRICE * child_tickets + ADULT_PRICE * adult_tickets;
    distributor_price = 0.8 * gross_profit;
    net_profit = gross_profit - distributor_price;

    cout << "Movie Name: " << right << setw(10) << "\"" << movie_title << "\"" << endl;
    // cout << "Adult tickets sold: " << adult_tickets << endl;
    // cout << "Child tickets sold: " <<  child_tickets << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross profit: " << right << setw(12) << "$" << gross_profit << endl;
    cout << "Distributor price: " << right << setw(7)  << "$" << distributor_price << endl;
    cout << "Net profit: " << right << setw(14) << "$" << net_profit << endl;

    return 0;
}