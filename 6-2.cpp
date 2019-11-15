#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int xuehao;
    string name;
    float chinese,english,math;
public:
    Student(){xuehao=0,name="��С��",chinese=85,english=85,math=85;}
    Student(int id, string name2, float chinese2, float english2, float math2){xuehao=id;name=name2;chinese=chinese2;english=english2;math=math2;}
    Student(const Student &s){xuehao=s.xuehao;name=s.name;chinese=s.chinese;english=s.english;math=s.math;cout<<"����"<<endl;}
    ~Student(){cout<<"�������"<<endl;}
    double sum();
    double ave();
    void my_cout();
};

double Student::sum() {
    return chinese+english+math;
}

double Student::ave() {
    return sum()/3;
}
void Student::my_cout() {
    cout<<xuehao<<"  "<<name<<"  "<<"�ܷ�Ϊ��"<<sum()<<"  "<<"ƽ����Ϊ:"<<ave()<<endl;
}
int main()
{
    int id;
    string name;
    float chinese;
    float math;
    float english;
    cout<<"����������ѧ�š����֡����ĳ��ɼ���Ӣ��ɼ�����ѧ�ɼ�"<<endl;
    cin>>id>>name>>chinese>>english>>math;
	Student s1(id,name,chinese,english,math);
    Student s2=s1;
    s1.my_cout();
    s2.my_cout();
    return 0;
}
