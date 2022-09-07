// Lrgest of three numbers using nested if

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter the three number num1s : " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << "\nThe largest number num1mong [ " << num1 << ", " << num2 << ", " << num3 << " ] is :: " << num1 << "\n" << endl;
    }
    if (num2 >= num1 && num2 >= num3)
    {
        cout << "\nThe largest number num1mong [ " << num1 << ", " << num2 << ", " << num3 << " ] is :: " << num2 << "\n" << endl;;
    }
    if (num3 >= num1 && num3 >= num2)
    {
        cout << "\nThe largest number num1mong [ " << num1 << ", " << num2 << ", " << num3 << " ] is :: " << num3 << "\n" << endl;
    }

    return 0;
}