// Minimum/Maximum
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, min, max;

    cout << "Enter two integers, separated by a space: ";
    cin >> num1 >> num2;

    if (num1 < num2) {
        min = num1;
        max = num2;
    }

    else if (num1 > num2) {
        min = num2;
        max = num1;
    }

    else {
        cout << "The numbers are both " << num1 << endl;
        return 0;
    }
        
    cout << min << " is less than " << max << endl;
    return 0;
}