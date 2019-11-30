#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
	string name;
	int age;
	string sex;
	string address;
	int phone_number;
	string title;
	void display();

};
class Cadre {
public:
	string name;
	int age;
	string sex;
	string address;
	int phone_number;
	string post;

};
class Teacher_Cadre:public Teacher,public Cadre {
public:
	float wages;
	Teacher_Cadre() {
		Teacher::name = "test_name";
		Teacher::age = 40;
		Teacher::sex = "male";
		title = "test_title";
		Teacher::address = "test_address";
		Teacher::phone_number = 66666666;
		post = "test_post";
		wages = 6000.12;
	}
	void show();

};
void Teacher::display() {
	cout<<name<<endl<<age<<endl<<sex<<endl<<title<<endl<<address<<endl<<phone_number<<endl;
}

void Teacher_Cadre::show() {
	Teacher::display();
	cout<<post<<endl<<wages<<endl;

}

int main(){
	Teacher_Cadre tc1;
	tc1.show();
	system("pause");
	return 0;
}