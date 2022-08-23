//Sum and Average of three numbers

#include<iostream>
using namespace std;
int main()
{
    float a, b, c, sum, avg;
    cin >> a >> b >> c;
    sum = a + b + c;
    avg = sum / 3 ;
    cout << "Sum = " << sum << endl;
    cout << "Avg = " << avg << endl;

    return 0;
}