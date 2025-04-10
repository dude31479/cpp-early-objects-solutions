// Personal Best
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, date1, date2, date3,
           first, second, third;
    int height1, height2, height3;

    cout << "Please enter the pole vaulter's name: ";
    cin  >> name;
    cout << "Enter the first date: ";
    cin  >> date1;
    cout << "Enter the pole vaulter's height (in meters): ";
    cin  >> height1;
    cout << "Enter the second date: ";
    cin  >> date2;
    cout << "Enter the pole vaulter's height: ";
    cin  >> height2;
    cout << "Enter the third date: ";
    cin  >> date3;
    cout << "Enter the pole vaulter's height: ";
    cin  >> height3;

    if (height1 > height2 && height1 > height3)
    {
        first = date1;
        if (height2 > height3)
        {
            second = date2;
            third = date3; 
        }
        else
        {
            second = date3;
            third = date2;
        }
    }
    else if (height2 > height1 && height2 > height3)
    {
        first = date2;
        if (height1 > height3)
        {
            second = date1;
            third = date3;
        }
        else
        {
            second = date3;
            third = date1;
        }
    }
    else if (height3 > height1 && height3 > height2)
    {
        first = date3;
        if (height1 > height2)
        {
            second = date1;
            third = date2;
        }
        else
        {
            second = date2;
            third = date1;
        }
    }
    
    cout << name << "'s heighest dates:" << endl;
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;

    return 0;
}