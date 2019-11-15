#include <iostream>
#include "Coordinate.h"
#include "Line.h"
using namespace std;

Coordinate::Coordinate(){cout<<"������Coordinate"<<endl;}
void Coordinate::set_xy(int x, int y) {m_ix=x;m_iy=y;}
Coordinate::~Coordinate() {cout<<"������Coordinate"<<endl;}

Line::Line(int x1,int y1,int x2,int y2)
{
    cout<<"������Line"<<endl;
    m_coorA.set_xy(x1,y1);
    m_coorB.set_xy(x2,y2);
    print();
}
void Line::setA(int x1,int y1)
{
    m_coorA.set_xy(x1,y1);
}
void Line::setB(int x2,int y2)
{
    m_coorB.set_xy(x2,y2);
}
Line::~Line() {cout<<"������Line"<<endl;}

void Line::print()
{
    cout<<"A��Ϊ��"<<'('<<m_coorA.get_x()<<','<<m_coorA.get_y()<<')'<<endl;
    cout<<"B��Ϊ��"<<'('<<m_coorB.get_x()<<','<<m_coorB.get_y()<<')'<<endl;
}
int main()
{
    Line *p = new Line(2, 1, 6, 4);
    delete p;
    p = NULL;
    return 0;
}
