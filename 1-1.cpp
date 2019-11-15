#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j,result;
	cout<<endl;
	for (i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			result=i*j;
			cout<<std::left<<i<<"*"<<j<<"="<<setw(3)<<result;
		}
	cout<<endl; /*每一行后换行*/
	}
return 0;
}
