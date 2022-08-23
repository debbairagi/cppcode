//Average of two Numbers

#include<iostream>
using namespace std;

void printline(char ch='=', int len = 40)
{
    for(int i=1; i<=len; i++)
    {
        cout << ch;
    }
    cout << endl;
}

int main()
{
    float num1, num2;
    printline();
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    printline();
    float sum = num1 + num2;
    float avg = sum/2;

    cout << "The sum of the two number = " << sum << endl;
    cout << "The average of the two number = " << avg << endl;
    printline();
    return 0;
}