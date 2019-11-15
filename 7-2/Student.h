#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    int id;//Ñ§ºÅ
    float score;//³É¼¨
public:
    Student(int n, float s): id(n), score(s){};
    static void max(Student *pt, int n);
};

#endif
