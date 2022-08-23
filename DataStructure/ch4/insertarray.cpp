#include <iostream>
using namespace std;

class deb
{
public:
    int LA[100], i, n, item, j, k;
    void input();
    void insertion();
    void deletion();
    void display();
};

void deb ::input(void)
{
    cout << "Enter array limit: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> LA[i];
    }
}

void deb ::insertion(void)
{
    cout << "which position you want to insert: ";
    cin >> k;
    cout << "What is your item value: ";
    cin >> item;
    for(j=n; j>=k; j--)
    {
        LA[j+1] = LA[j];
    }
    LA[k] = item;
    n = n+1;
}

void deb::deletion(void)
{
    cout << "Which position you wanna delete: ";
    cin >> k;
    for(j=i; j>=i; j++)
    {
        LA[j] = LA[j+1];
    }
    item = LA[i];
    n = n-1;
}


void deb::display(void)
{
    cout << "After modifiaction the array is :" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << LA[i] << endl;
    }


}

int main()
{
    deb obj;
    obj.input();
    //obj.insertion();
    obj.deletion();
    obj.display();

    return 0;
}