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
        m_iCount=arr.m_iCount;
        for(int i=0;i<m_iCount;i++)
        {
            m_pArr[i]=arr.m_pArr[i];
        }
    }
    ~Array();
    void print();
    int get_icout();
};
Array::Array() {
    m_iCount=5;
    m_pArr=new int[m_iCount];
}
Array::~Array() {cout<<"析构"<<endl;}
int Array::get_icout() {
    return m_iCount;
}
void Array::print() {
    cout<<get_icout()<<endl;
    for(int i=0;i<m_iCount;i++)
    {
        cout<<m_pArr[i];
    }
    cout<<endl;
}
int main()
{
    Array arr1;
    arr1.print();
    Array arr2=arr1;
    arr2.print();
    return 0;
}


