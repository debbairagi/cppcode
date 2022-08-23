#include <iostream>
using namespace std;

long fact(int n)
{
    if(n==0) //base case
    return 1;

    return (n*fact(n-1)); //recursive function call
}

int main()
{
    int num;
    cout <<"Enter a positive integer number : ";
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num);

    cout << endl;

    return 0;
}