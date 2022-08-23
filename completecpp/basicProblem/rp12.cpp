//Calculate Compound Interest
#include<iostream>
#include<math.h>

using namespace std;

/*
A = P (1 + r/n) (nt)
Total compounded interest = P (1 + r/n) (nt) – P
A = the future value of the investment/loan, including interest
P = the principal investment amount (the initial deposit or loan amount)
r = the annual interest rate (decimal)
n = the number of times that interest is compounded per year
t = the number of years the money is invested or borrowed for
*/

int main()
{
    float p, r, t, ci;

    cout << "Enter the principle amount : ";
    cin >> p;
    cout << "Enter the annual interest rate : ";
    cin >> r;
    cout << "Enter the number of years: ";
    cin >> t;

    ci = p * pow(1+(r/100), t);

    cout << "The compound interest is : " << ci << endl;

    return 0;
}