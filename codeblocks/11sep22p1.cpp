#include <iostream>
using namespace std;

int main()
{
    int x, y;
    x = 5;
    y = ++x;

    cout << "x = " << x << ", y = " << y << endl;
    x = 5;
    y = ++x * x++;
    cout << "x = " << x << ", y = " << ++y << endl;
    x = 5;
    y = ++x * x++;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
