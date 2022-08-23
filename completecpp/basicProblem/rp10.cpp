//Convert Days Into Years Weeks and Days

#include<iostream>
using namespace std;
int main()
{
    int days, years,months, weeks , Days;

    cout << "Enter the number of days: ";
    cin >> days;
    years = days / 365;
    months = (days % 365) / 30;
    weeks = ((days % 365) % 30)/7;
    Days = ((days % 365) % 30)%7;

    cout << "Years : " << years<< endl;
    cout << "MOnths : " << months << endl;
    cout << "Weeks : " << weeks << endl;
    cout << "Days : " << Days << endl;

    return 0;

}