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
#include <iomanip>
using namespace std;

int main()
{
    const double widget_weight = 9.2;
    double pallet;
    int num_widgets;

    cout << "This program will tell you how many widgets you have\n";
    cout << "based on the weight of a pallet (of widgets)\n";
    cout << "How much does the pallet weight? ";
    cin >> pallet;

    num_widgets = pallet / widget_weight;

    cout << "You have " << num_widgets << " widgets.\n";
    return 0;
}