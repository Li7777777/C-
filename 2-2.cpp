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
    control=getch();       //getch()���û������ַ����Զ���ȡ���������س���
    if(control==13)
        cout<<"hello"<<endl;
    else
        cin>>str;
        cout<<display(str) ;
}
