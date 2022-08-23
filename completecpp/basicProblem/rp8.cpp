//Convert inches to feet yards and inches

#include<iostream>
using namespace std;
int main()
{
    float inch, feet, yard;
    cout << "Enter inches to convert : ";
    cin >> inch;
    cout << "Inches = " << inch << endl;
    feet = inch/12;
    yard = inch / 36;
    cout << "After conversion : " << endl;
    cout << "Feets = " << feet << endl;
    cout << "Yards = " << yard << endl;

    return 0;
}