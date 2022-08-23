//Default Arguments

#include <iostream>
#include <stdio.h>
using namespace std;

void printline (char ch, int len)
{
    for(int i=1 ; i<= len ; i++)
    {
        cout << ch;
    }
    cout << "\n";
}

float value (float p,int n,float r)
{
    int year = 1;
    float sum = p;
    while(year<=n)
    {
        sum = sum*(1+r);
        year = year + 1;
    }
    return (sum);
}

int main()
{
    float amount;
    float value(float p, int n, float r = 0.15); //prototype
    void printline (char ch = '*', int len = 40);// prototype
    printline();

    amount = value ( 5000.00, 5);
    cout << "Final Value = " << amount << "\n";
    amount = value(10000.00, 5, 0.30);
    cout << "\nFinal Value = " << amount << "\n";

    printline('=');

    return 0;
}