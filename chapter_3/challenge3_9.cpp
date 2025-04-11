/**********************************************
 *                                            *
 *            HOW MANY WIDGETS?               *   
 *                                            *
 *  This program is designed for the          *
 *  owner of a "widget factory," in           *
 *  order to be able to discern the number    *
 *  of widgets on a given pallet, by weight.  *
 *                                            * 
 *********************************************/
#include <iostream>
using namespace std;

int main()
{
    const double WIDGET_WEIGHT = 9.2;
    double pallet;
    int num_widgets;

    cout << "This program will tell you how many widgets\n"
         << "you have, based on the weight of a pallet\n"
         << "(of widgets)\n";
    cout << "How much does the pallet weigh? ";
    cin >> pallet;

    num_widgets = pallet / WIDGET_WEIGHT;

    cout << "You have " << num_widgets << " widgets.\n";
    return 0;
}