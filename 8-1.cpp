#include <iostream>


using namespace std;
class Coordinate {
private:
    int m_iX;
    int m_iY;
public:
    int getx();
    int gety();
    void setxy();
    Coordinate();

    void setxy(int x, int y);
};

int Coordinate::getx() {
    return m_iX;
}
int Coordinate::gety() {
    return m_iY;
}
void Coordinate::setxy(int x,int y) {
    m_iX=x;
    m_iY=y;
}
Coordinate::Coordinate() {
    m_iX=0;
    m_iY=0;
}
int main()
{
    Coordinate *p = new Coordinate();
    Coordinate *q = new Coordinate();
    p->setxy(3,5);
    q->setxy(6,2);
    cout<<"横坐标和："<<p->getx()+q->getx()<<endl;
    cout<<"纵坐标和："<<p->gety()+q->gety()<<endl;
    delete p;delete q;
    p=NULL; q=NULL;
    return 0;
}


