#include <string>
#include <iostream>
using namespace std;
class Teacher
{
	public:
		string get_name();
    	string get_sex();
    	int get_age();
	    void teach();
	private:
		string name,sex;
    	int age;
};

