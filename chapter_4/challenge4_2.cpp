// Roman Numeral Converter
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "This program converts a digit to a Roman Numeral\n";
    cout << "Enter a number between 1 and 10: ";
    cin  >> number;

    switch(number)
    {
        case 1:  cout << "1 is I\n";    break;
        case 2:  cout << "2 is II\n";   break;
        case 3:  cout << "3 is III\n";  break;
        case 4:  cout << "4 is IV\n";   break;
        case 5:  cout << "5 is V\n";    break;
        case 6:  cout << "6 is VI\n";   break;
        case 7:  cout << "7 is VII\n";  break;
        case 8:  cout << "8 is VIII\n"; break;
        case 9:  cout << "9 is IX\n";   break;
        case 10: cout << "10 is X\n";   break;
        default: cout << "Invalid input. Run the program again and\n"
                      << "enter a number between 1 and 10.\n";
    }
    return 0;
}