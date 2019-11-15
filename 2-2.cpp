#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

string display(string str)
{
    return str;
}
int main()
{
    char control;
    string str;
    control=getch();       //getch()当用户摁下字符是自动读取，无需键入回车。
    if(control==13)
        cout<<"hello"<<endl;
    else
        cin>>str;
        cout<<display(str) ;
}
