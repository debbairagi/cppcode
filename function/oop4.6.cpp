//Use of Math Functions

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void printline ( char ch ='=', int len = 40)
{
    for(int i = 1; i<=len ; i++)
    cout << ch;
    cout << endl;
}

int main()
{
    cout << fixed << setprecision(2);
    printline();
    cout << "Sin (100) = " << sin(100.00) << endl;
    cout << "Cos (100) = " << cos(100.00) << endl;
    cout << "Tan (100) = " << tan(100.00) << endl;
    printline();
    cout << "7 to the pow of 6 = " << pow(7.0, 6.0) << endl;
    cout << "log10  (10)  = " << log10(10) << endl;
    cout << "Square root of 25 = " << sqrt(25.00)<< endl;
    printline();

    return 0;

}