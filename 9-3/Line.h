#ifndef UNTITLED_LINE_H
#define UNTITLED_LINE_H


#include "Coordinate.h"
    class Line
    {
    public:
        Line(int x1,int y1,int x2,int y2);
        ~Line();
        void setA(int x,int y);
        void setB(int x,int y);
        void printInfo();		//打印成（x，y）格式
        void printInfo() const;	//常成员函数与普通成员函数互为重载
    private:
        const Coordinate m_coorA;	//常对象成员
        Coordinate m_coorB;
    };


#endif //UNTITLED_LINE_H
