#include <iostream>
using namespace std;

class Array
{
private:
    int m_iCount;
    int *m_pArr;
public:
    Array();
    Array(Array const &arr){
        this->m_iCount=arr.m_iCount;
    }
    ~Array();
    void print();
    void display();
    int get_icout();
};
Array::Array() {
    m_iCount=5;
    m_pArr=new int[m_iCount];
}
Array::~Array() {cout<<"Îö¹¹"<<endl;}
int Array::get_icout() {
    return m_iCount;
}
void Array::print() {
    cout<<get_icout()<<endl;
}
void Array::display() {
    m_pArr=&m_iCount; 
    cout<<&m_pArr<<endl;
}
int main()
{
    Array arr1;
    arr1.display();
    arr1.print();
    Array arr2=arr1;
    arr2.display();
    arr2.print();
    return 0;
}



