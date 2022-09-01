//Reverse a Number using while loop

#include <iostream>
using namespace std;
int main()
{
    int i, n, rev = 0, no, r;

    cout << "Enter a number: ";
    cin >> n;
    no = n;
    while(no > 0)
    {
        r  = no % 10;
        rev = rev * 10 + r;
        no = no / 10;
    }
    cout << "The reverse number of [" << n << "] is " << "[" << rev<<"]"<< endl;


    return 0;
}