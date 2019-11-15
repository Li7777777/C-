#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int width;
    int height;


public:
    Rectangle(length){length=0,width=0,height=0;}
    ~Rectangle(){cout<<"析构完成"<<endl;}
    void my_cin();
    Rectangle(const Rectangle &r){length=r.length;height=r.height;width=r.width;cout<<"拷贝"<<endl;}//先执行拷贝才执行输入 
    double my_s1(){return length*height;}
    double my_s2(){return width*height;}
    double my_s3(){return length*width;}
    void my_cout();
};
void Rectangle::my_cin() {
    cout<<"请输入长宽高"<<endl;
    cin>>length;
    cin>>width;
    cin>>height;
}
void Rectangle::my_cout() {
    cout<<my_s1()*35.2+my_s2()*21.8+my_s3()*11.3<<"元/平米"<<endl;
}
int main()
{
    Rectangle r1;
    Rectangle r2=r1;
    r1.my_cin();
    r1.my_cout();
    r2.my_cout();//拷贝了初始值
    return 0;
}
