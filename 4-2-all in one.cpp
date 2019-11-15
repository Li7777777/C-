//all in one 
#include <iostream>
#include <string>

using namespace std;
class Teacher
{
private:
    string name,sex;
    int age;
public:
    string get_name()
    {
    	name="li7";
        return name;
    }
    string get_sex()
    {
    	sex="male";
        return sex;
    }
    int get_age()
    {
    	age=20;
        return age;
    }
    void teach()
    {
        cout<<get_name()<<"  "<<get_sex()<<"  "<<get_age()<<endl;
    }
};


int main()
{
    Teacher t1;
    t1.teach();
    return 0;
}
