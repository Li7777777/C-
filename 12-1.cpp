#include<iostream>
using namespace std;

class Object {
public:
	float weight;
	Object(){ cout <<"����Ob"<< endl; }
	~Object(){ cout << "����Ob" << endl; }
};
class Box:public Object {
public:
	float height,width;
	Box(){ cout << "����Bo" << endl; }
	~Box(){ cout << "����Bo" << endl; }
	
};
void te() {
	Box a;
}
int main() {
	te();	
	system("pause");
	return 0;


}