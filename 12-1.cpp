#include<iostream>
using namespace std;

class Object {
public:
	float weight;
	Object(){ cout <<"构造Ob"<< endl; }
	~Object(){ cout << "析构Ob" << endl; }
};
class Box:public Object {
public:
	float height,width;
	Box(){ cout << "构造Bo" << endl; }
	~Box(){ cout << "析构Bo" << endl; }
	
};
void te() {
	Box a;
}
int main() {
	te();	
	system("pause");
	return 0;


}