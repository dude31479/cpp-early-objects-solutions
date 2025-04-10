// Math Tutor Version 2
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);

    int num1, num2, result, answer;

    num1 = rand() % 41 + 10;
    num2 = rand() % 41 + 10;
    result = num1 + num2;

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "----" << endl;
    cout << "  ";
    cin >> answer;

    cout << "\n\n\n\n";
    cout << "\n\n\n\n";
    if (answer == result)
        cout << "CORRECT!\n\n\n\n";
    else
        cout << "INCORRECT!\n\n\n\n";

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "----" << endl;
    cout << "  " << result << endl << endl;

    return 0;
}