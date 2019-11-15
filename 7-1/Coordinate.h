#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
private:
    int m_ix;
    int m_iy;
public:
    Coordinate();
    ~Coordinate();

    void set_xy(int x,int y);
    int get_x(){ return m_ix;}
    int get_y(){ return m_iy;}
};

#endif
