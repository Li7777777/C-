#include <iostream>
using namespace std;

void fun(int &a,int &b,int &c)
{
    int temp;
    if(a>b)
    {
        temp=a;a=b;b=temp;
    }
    if(a>c)
    {
        temp=a;a=c;c=temp;
    }
    if(b>c)
    {
        temp=b;b=c;c=temp;
    }
}
int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    fun(i,j,k);
    cout<<i<<"  "<<j<<"  "<<k<<endl;
    return 0;
}
