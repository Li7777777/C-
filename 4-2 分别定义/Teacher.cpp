#include "Teacher.h"

string Teacher::get_name()
{
	name="li7";
    return name;
}
int Teacher::get_age()
{
	age=20;
	return age;
}
string Teacher::get_sex()
{
	sex="male";
    return sex;

}
void Teacher::teach()
{
	cout<<get_name()<<"  "<<get_sex()<<"  "<<get_age()<<endl;
}
