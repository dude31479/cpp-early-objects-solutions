// This program uses a loop to display the characters for each ASCII
// code 32 through 127
#include <iostream>
using namespace std;

int main()
{
    int ascii_character = 32;

    while (ascii_character != 128)
    {
        for (int count = 0; count < 16; count++)
        {
            cout << static_cast<char>(ascii_character) << " ";
            ascii_character++;
        }
        cout << endl;
    }
    return 0;
}