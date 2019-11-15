#include <iostream>
using namespace std;

class Array
{
private:
    int m_iCount;
public:
    Array();
    Array(Array const &arr){m_iCount=arr.m_iCount;}
    ~Array();
    void print();
    int get_icout();
};
Array::Array() {m_iCount=5;}
Array::~Array() {cout<<"析构"<<endl;}
int Array::get_icout() {
    return m_iCount;
}
void Array::print() {
    cout<<get_icout()<<endl;
}
int main()
{
    Array arr1;
    arr1.print();
    Array arr2=arr1;
    arr2.print();
    return 0;
}


