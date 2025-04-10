#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numStudents = 0;
    string name, first, last;

    while (numStudents < 1 || numStudents > 25) 
    {
        cout << "How many students are in your class (1 - 25): ";
        cin  >> numStudents;
    }

    cout << "Enter the name of the first student: ";
    cin  >> name;
    first = last = name;

    for (int student = 2; student <= numStudents; student++)
    {
        cout << "Enter the name of student #" << student << ": ";
        cin  >> name;
        if (name < first)
            first = name;
        else if (name > last)
            last = name;
    }
    cout << "Out of all the students, " << first << " will be first in line\n";
    cout << "and " << last << " will be last.\n";
    return 0;
}