#include<iostream>
#include<stdio.h>
using namespace std;

class deb
{
public:
    int LA[100], i, item, n, j,k;
    void input();
    void deletion();
    void printline(char , int);
};

void deb::input(void)
{
    cout << "\nEnter array limit: ";
    cin >> n;
    cout << "Enter array elements: \n";
    for(i=1; i<=n; i++)
    {
        cin >> LA[i];
    }
}

void deb::deletion(void)
{
    cout << "\nEnter item position : ";
    cin >> k;

    for(j=k; j<=n; j++)
    {
        LA[j] = LA[j+1];
    }

    n = n -1;

    cout << "After deletion : ";
    for(i=1; i<=n; i++)
    {
        cout << LA[i] << " ";
    }
    cout << endl;
}

void deb::printline(char ch = '=', int n = 40)
{
    for(int i=0; i<=n; i++)
    {
        cout << ch;
    }
}

int main()
{
    deb obj;
    obj.printline();
    obj.input();
    obj.printline();
    obj.deletion();
    obj.printline();

    return 0;
}
