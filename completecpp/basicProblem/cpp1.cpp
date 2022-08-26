#include<iostream>
using namespace std;

#define CUBE[int x] (x*x*x)

int main()
{
    int n;
    cout << "Enter a positive integer number: ";
    cin >> n;
    int cube = CUBE(n);
    

    return 0;
}