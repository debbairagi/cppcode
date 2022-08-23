//Swap Two Numbers without using third variable

#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter a number for variable a: ";
    cin >> a;
    cout << "Enter a number for variable b: ";
    cin >> b;
    cout << "Before swaping the variable are: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swaping the variable are : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}