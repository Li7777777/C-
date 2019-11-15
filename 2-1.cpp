#include <iostream>

using namespace std;
int MAX(int a,int b)
{
	if(b>a)
		a=b;
	else
		a=a;
	return a;
}
char MAX(char a,char b)
{
	if(b>a)
		a=b;
	else
		a=a;
	return a;
}
float MAX(float a,float b)
{
	if(b>a)
		a=b;
	else
		a=a;
	return a;
}
double MAX(double a,double b)
{
	if(b>a)
		a=b;
	else
		a=a;
	return a;
}
int main() 
{
	int a,b;
	char c,d;
	float e,f;
	double g,h;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	cout <<"  "<<MAX(a,b)<<"  "<<MAX(c,d)<<"  "<<MAX(e,f)<<"  "<<MAX(g,h)<<endl;
	return 0;
	
	
}

