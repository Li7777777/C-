#include <iostream>


using namespace std;
class Circle {
private:
    float radius;//Բ�İ뾶
public:
    float get_radius();
    Circle setRadius(float radius);
    Circle(float radius){this->radius=radius;cout<<"����"<<endl;}
    ~Circle() { cout << "����" << endl; }
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
    cout<<"�뾶Ϊ:"<<get_radius()<<"��Բ"<<endl;
    return *this;
}
int main() {
    Circle cir(100);
    cir.printInfo().setRadius(20).printInfo();
    //cir.printInfo()->setRadius(20)->printInfo();
    return 0;
}


