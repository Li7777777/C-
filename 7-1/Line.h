#ifndef LINE_H
#define LINE_H

class Line{
private:
    Coordinate m_coorA;
    Coordinate m_coorB;
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void setA(int x1,int y1);
    void setB(int x2,int y2);
    void print();
};

#endif
