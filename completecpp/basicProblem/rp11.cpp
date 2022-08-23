//Square Root of a number using sqrt() function
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double num;
    double ans;

    cout << "Enter a number : ";
    cin >> num;

    ans = sqrt(num);

    cout << "The Square value of the number is : "<<ans<< endl;
    return 0;
}