#include<iostream>
#include<string.h>

using namespace std;

class constructor{
    private:
        string name;
        int age;

    public:
        constructor(){
            name = "Debbindu Bairagi";
            age = 22;
            cout << "Constructor is called when u create an object of constructor." << endl;
        }

        void display(){
            cout << name << endl << age << endl; 
        }
};

int main()
{
    constructor obj;
    obj.display();


    return 0;
}