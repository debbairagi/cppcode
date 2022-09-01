//Check whether a year is Leap year or not
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year of four digit: ";
    cin >> year;

    if(year%100 == 0)
    {
        if(year%400==0)
        {
            cout << "The enterd year [" << year << "] is a leap year" << endl;
        }
    }
    else
    {
        if(year %4 ==0)
        {
            cout << "The enterd year [" << year << "] is a leap year" << endl;
        }
        else
        {
            cout << "The enterd year [" << year << "] is not a leap year" << endl;
        }
    }


    return 0;
}