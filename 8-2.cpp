#include <iostream>


using namespace std;
class Circle {
private:
    float radius;//圆的半径
public:
    float get_radius();
    Circle setRadius(float radius);
    Circle(float radius){this->radius=radius;cout<<"构造"<<endl;}
    ~Circle() { cout << "析构" << endl; }
    Circle printInfo();
};
float Circle::get_radius() {
    return this->radius;
}
Circle Circle::setRadius(float radius) {
    this->radius=radius;
    return *this;
}
Circle Circle::printInfo() {
    cout<<"半径为:"<<get_radius()<<"的圆"<<endl;
    return *this;
}
int main() {
    Circle cir(100);
    cir.printInfo().setRadius(20).printInfo();
    //cir.printInfo()->setRadius(20)->printInfo();
    return 0;
}


