#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int x;
public:
    void set_data(int a)
    {
        x = a;
    }
    friend void max(XYZ, ABC);
};

class ABC
{
    int y;
public:
    void set_data(int a)
    {
        y = a;
    }
    friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2)
{
    if(t1.x > t2.y)
    cout << t1.x;
    else
    cout << t2.y;
}

 int main()
{
    ABC t2;
    XYZ t1;
    t2.set_data(20);
    t1.set_data(25);
    max(t1, t2);

    return 0;
}
