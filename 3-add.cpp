#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
    int n,i=20,a;
    srand(time(0)); //time(0)����ֵ������
    n=rand()%1000;
    cout<<"press enter a number in 1-1000��leave chances:"<<i<<endl;
    for(i;i>0;i--) {
        cin >> a;
        if (a == n) {
            cout << "nb,yes" << endl;
            break;
        }
        else if(a>n)
            cout << "biger,ʣ�����Ϊ��" << i-1 << endl;
        else
        	cout <<"smaller,ʣ�����Ϊ��" << i-1 << endl;
    }
    if(i==0)
        cout<<"sorry,gameover";
    else
    	cout<<"ף�أ�";
    return 0;
}

