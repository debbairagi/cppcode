//Find Quotient and Remainder

#include<iostream>
using namespace std;

int main()
{
    int divisor, dividend;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    
    cout << "Dividend : " << dividend << endl;
    cout << "Divisor : " << divisor << endl;
    cout << "Quotient : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;

    return 0;
}