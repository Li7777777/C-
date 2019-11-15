#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;
class Date
{
private:
    int year,month,day;
public:
    void setYear()
    {
        cin>>year;
    };
    void setMonth()
    {
        cin>>month;
    };
    void setDay()
    {
        cin>>day;
    };
    void printDate()
    {
    	setYear();
    	setMonth();
    	setDay();
        cout<<year<<"Äê"<<month<<"ÔÂ"<<day<<"ÈÕ"<<endl;
    };
};


int main()
{
    Date d1;
    Date d2;
    Date *p=new Date();
    Date *q=new Date();

    d1.printDate();
    d2.printDate();

    p->printDate();
    q->printDate();
    delete p;
    delete []q;


    return 0;
}
