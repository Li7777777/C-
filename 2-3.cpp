#include <iostream>
using namespace std;
const double pi=3.14159;
double res;
double area(float r,float a=360)
{
    res=(1.0/2)*pi*r*r*(a/180);
    return res;
}
int main()
{
    cout<<"The area of sector with radius 10 and angle 30 is:"<<area(10,30)<<endl;
    cout<<"The area of a circle with radius 10 is: "<<area(10)<<endl;
    return 0;
}
