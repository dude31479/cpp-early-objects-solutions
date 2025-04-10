// Book Club Points
#include <iostream>
using namespace std;

 /*****************************************************
 *  An online book club awards points to its customers * 
 *  based on the number of books purchased each month. *
 *  Points are awarded as follows:                     *
 *  __________________________________________         *
 *      Books Purchased         Points Earned          *
 * -------------------------------------------         *
 *            0                        0               *
 *            1                        5               * 
 *            2                       15               *
 *            3                       30               *
 *       4 or more                    60               *
  *****************************************************/     

int main()
{
    int numBooks;

    cout << "This program awards points for each book\n"
         << "that you have purchased.\n\n";

    cout << "Enter the number of books that you have\n"
         << "purchased this month: ";
    cin  >> numBooks;

    if (numBooks > 0)
    {
        cout << "You have earned ";
        switch (numBooks)
        {
            case 1: cout << "5 points!\n";
                break;
            case 2: cout << "15 points!\n";
                break;
            case 3: cout << "30 points!\n";
                break;
            default: cout << "60 points!!!\n";
        }
    }
    else if (numBooks < 0)
        cout << "Please re-run the program and enter a valid number.\n";
    else
        cout << "Sorry. You have not earned any points...\n";

    return 0;
}