//Raise any number X to power N

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x, n;
    double result;
    cout << "Enter the number for x: ";
    cin >> x;
    cout << "Enter the number for n: ";
    cin >> n;

    result = pow(x,n);

    cout << "The result is : " << result << endl;

    return 0;
}