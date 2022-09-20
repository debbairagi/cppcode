// Pointer to pointer

#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int*** r = &q;

    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;
    cout << "**q = " << **q << endl;
    cout << "**r = " << **r << endl;
    cout << "**r = " << ***r << endl;
    ***r = 10;
    cout << "x = " << x << endl;
    **q = *p + 2;
    cout << "x = " << x << endl;
}