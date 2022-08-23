#include<iostream>
using namespace std;

class item
{
    int number; // private by default
    float cost; // private by default

    public:
        void getdata (int a, float b);

        void putdata(void)
        {
            cout << "number : " << number << endl;
            cout << "cost : " << cost << endl;
        }
};

void item :: getdata(int a, float b)
{
    number = a;
    cost = b;
}

//...........Main program .................
int main()
{
    item x;
    cout << "\nobject x" << "\n";
    x.getdata(100, 299.95);
    x.putdata();

    item y;
    cout << "\nobject y" << "\n";
    y.getdata(200, 175.50);
    y.putdata();

    cout << endl;

    return 0;
}