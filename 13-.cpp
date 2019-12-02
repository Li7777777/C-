#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	string m_strColor;
	Person(string color):m_strColor(color)
	{
		cout << "gz Person" << endl;

	};
	 ~Person(){ cout << "xg Person" << endl; }
	void printcolor()
	{
		cout<<m_strColor<<endl;
	}

};
class Farmer: virtual public Person{
public:
	string m_strName;
	Farmer(string name,string color):Person("Farmer" + color),m_strName(name)
	{
		cout << "gz Farmer" << endl;
	}
	virtual ~Farmer() { cout << "xg Farmer" << endl; }
	void sow() { cout << "sow" << endl; }

};
class Worker: virtual public Person {
public:
	string m_strCode;
	Worker(string code,string color): Person("Worker" + color),m_strCode(code)
	{ 
		cout << "gz Worker"<<endl;
	}
	virtual ~Worker() { cout << "xg Worker" << endl; }
	void carry() { cout << "carry" << endl; }
};
class MigrantWorker:public Worker, public Farmer{
public:
	MigrantWorker(string name,string code,string color):Farmer(name, color),Worker(code, color),Person(color)
	{
		cout << "gz MigrantWorker" << endl; 
	}
	~MigrantWorker() { cout << "xg MigrantWorker" << endl; }

};

int main() {
	MigrantWorker *p = new MigrantWorker("Merry", "100", "yellow");
	p->Farmer::printcolor();
	cout << p->Farmer::m_strName<<endl;
	cout << p->Worker::m_strCode << endl;
	p->Worker::printcolor();
	delete p;
	p = NULL;
	system("pause");
}
