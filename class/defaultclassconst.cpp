#include <iostream>
#include <stdio.h>
using namespace std;

class human{
    private:
        string name;
        int age;
    public:
        human(){
            cout << "default constructor" << endl;
            name = "noname";
            age = 0;
        }
        human(string iname, int iage){
            cout << "Overloading constructor" << endl;
            name = iname;
            age = iage;
        }

        void speakup(){
            cout << name << endl << age << endl;
        }
};

int main()
{
    human obj("Debbindu", 22);
    obj.speakup();

    cout << endl;
    cout << endl;
    return 0;
}