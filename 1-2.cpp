//2.定义一个以你的姓名作为命名空间名称，在该命名空间中定义一个整型变量 a，并给该变量赋值为 123；判断该命名空间下的变量是奇数还是偶数，并将结果显示在屏幕

#include <iostream>
namespace li7
{
int a = 123;
}
using namespace li7;
using namespace std;
int main()
{
	if(a%2==0)
		cout<<"偶数"<<endl;
	else if (a%2==1)
		cout<<"奇数"<<endl;
	
return 0;
}
