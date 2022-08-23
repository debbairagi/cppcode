#include<iostream>
#include<string>
using namespace std;

class person
{
    string name;
    int age;
    public:
        void getdata(void);
        void display(void);
        void printline(char , int);
};

void person ::getdata(void)
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
}
void person:: display(void)
{
    cout << "OUTPUT: " << endl;
    cout << "Your name is : "<< name << endl;
    cout << "Your age is : "<< age << endl;
}
void person::printline(char ch ='=', int len = 40)
{
    for(int i=1; i<=len ; i++)
    {
        cout << ch;
    }
    cout << "\n";
}

int main()
{
    person p;
    p.printline();
    p.getdata();
    p.printline();
    p.display();
    p.printline();

    return 0;
}