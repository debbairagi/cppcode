//Generate Fibonacci Series for N numbers

#include<iostream>
using namespace std;
int main()
{
    int i, n, first = 0 , second = 1, next ;

    cout << "Enter the number of terms as n : ";
    cin >> n;

    cout << "The fibonacci series for n = [" <<n << "]" << " is : "<< endl << endl;

    for(i=0; i< n ; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl << endl;

    return 0;
}