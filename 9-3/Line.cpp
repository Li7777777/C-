#include <iostream>
#include "Line.h"
#include "Coordinate.h"
using namespace std;


Line::Line(int x1, int y1, int x2, int y2):m_coorA(x1,y1),m_coorB(x2,y2) {}
Line::~Line() {cout<<"析构L"<<endl;}
void Line::setA(int x, int y) {
    //m_coorA是常对象成员无法使用普通成员函数使用导致报错

//因为：setX(int x); 相当于 setX(Coordinate *this,int x);

//传进去的是m_coorA的常this指针（只读）m_coorA是个只具有读权限的对象

//而原函数里的this既有读权限又有写权限

//

//m_coorA.setX(x);

//m_coorA.setY(y);
}
void Line::setB(int x, int y) {m_coorB.setX(x);m_coorB.setY(y);}
void Line::printInfo() {
    cout<<"A:("<<m_coorA.getX()<<","<<m_coorA.getY()<<")"<<endl;
    cout<<"B:("<<m_coorB.getX()<<","<<m_coorB.getY()<<")"<<endl;
}
void Line::printInfo() const {
    cout<<"const"<<" A:("<<m_coorA.getX()<<","<<m_coorA.getY()<<")"<<endl;
    cout<<"const"<<" B:("<<m_coorB.getX()<<","<<m_coorB.getY()<<")"<<endl;
}