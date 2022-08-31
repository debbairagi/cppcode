#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
/* 1	Blue	9	Light Blue
   2	Green	0	Black
   3	Aqua	10	Light Green
   4	Red	    11	Light Aqua
   5	Purple	12	Light Red
   7	White	14	Light Yellow
   8	Gray	15	Bright White */
        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); //just once
        SetConsoleTextAttribute(color, 10);
           cout<<"My";
        SetConsoleTextAttribute(color, 11);
        cout<<" name";
        SetConsoleTextAttribute(color, 12);
        cout<<" is";
        SetConsoleTextAttribute(color, 13);
        cout<<" Debbindu";
        SetConsoleTextAttribute(color, 14);
        cout<<" Bairagi"<<endl;
      return 0;
}
