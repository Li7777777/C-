#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    int id;//ѧ��
    float score;//�ɼ�
public:
    Student(int n, float s): id(n), score(s){};
    static void max(Student *pt, int n);
};

#endif
