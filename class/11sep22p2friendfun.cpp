#include <iostream>
using namespace std;

class DEB;

class BINDU
{
    int x;
public:
    void input(void)
    {
        int a;
        cout << "Enter a positive integer number: ";
        cin >> a;
        x = a;
    }
    friend void large(BINDU, DEB);
};

class DEB
{
    int y;
public:
    void input(void)
    {
        int a;
        cout << "Enter a positive integer number: ";
        cin >> a;
        y = a;
    }
    friend void large(BINDU, DEB);
};

void large(BINDU t1, DEB t2)
{
    if(t1.x > t2.y)
    cout << "The largest number is : " << t1.x << endl;
    else
    cout << "The largest number is : " << t2.y << endl;
}

 int main()
{
    DEB t2;
    BINDU t1;
    t2.input();
    t1.input();
    large(t1, t2);

    return 0;
}
