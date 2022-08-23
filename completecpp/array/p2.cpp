#include<iostream>
using namespace std;

int main()
{
    // char a[7];
    int sample[10];
    sample[0] = 100;

    int *p;

    p = sample;
    cout << "Fist assign value of sample : " << *p << endl;

    return 0;
}