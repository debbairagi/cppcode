// Array of Objects

#include<iostream>
#include<string>
using namespace std;

class employee
{
    char name[30];
    float age;
    public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void)
{
    cout << "Enter name : ";
    cin.getline(name, 30);
    cout << "Enter age: ";
    cin >> age;
}

void employee::putdata(void)
{
    cout << "name : " << name << endl;
    cout << "Age : " << age << endl;
}

const int p = 3;
int main()
{
    employee manager[p];
    for(int i=0 ; i<p; i++)
    {
        cout << endl << "Details of Manager: " << i+1 << endl;
        manager[i].getdata();
    }

    for(int i=0 ; i<p; i++)
    {
        cout << endl << "Manager: " << i+1<< endl;
        manager[i].putdata();
    }

    return 0;
}