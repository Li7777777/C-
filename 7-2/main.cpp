#include <iostream>
#include "Student.h"
using namespace std;

void Student::max(Student *pt, int n)
{
    Student *p=pt;
    Student *ma=new Student(0,0);
    float max;
    for (max=pt->score; p<pt+n; p++)
        if ((p->score)>max)
        {
            max=p->score;
            ma=p;
        }
    cout<<"最高分：学号："<<ma->id<<"   成绩："<<ma->score<<endl;
}
int main()
{
    Student stu[5]={
            Student(1,84),
            Student(2,78),
            Student(3,95),
            Student(4,54),
            Student(5,99)
    };
    Student::max(stu,5);
    return 0;
}



