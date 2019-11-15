#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

class Time {
private:
    int hour;
    int minute;
    int sec;


public:
    void my_cin();
    void my_cout();
};
void Time::my_cin() {
cin>>hour;
cin>>minute;
cin>>sec;
}
void Time::my_cout() {
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
    Time t;
    t.my_cin();
    t.my_cout();
    return 0;
}
