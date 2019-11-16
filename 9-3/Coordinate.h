
#ifndef UNTITLED_COORDINATE_H
#define UNTITLED_COORDINATE_H


class Coordinate
{
public:
    Coordinate(int x,int y);
    ~Coordinate();
    void setX(int x);
    int getX() const;	//常成员函数getX()
    void setY(int y);
    int getY() const;	//常成员函数getY()
private:
    int x;			//数据成员与参数同名
    int y;			//使用this指针的方式编写程序
};


#endif //UNTITLED_COORDINATE_H
