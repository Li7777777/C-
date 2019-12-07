#include<iostream>
#include<string>
using namespace std;

class Coordinate
{
//-重载为友元函数
friend Coordinate& operator-(Coordinate &coor);
//++重载为友元函数
friend Coordinate& operator++(Coordinate &coor);
//后置++重载为友元函数
friend Coordinate& operator++(Coordinate &coor, int);
//+号友元函数重载
friend Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2);
//<<
friend ostream& operator<<(ostream &out, const Coordinate &coor);

public:
	/*二元运算符+的成员函数重载
	Coordinate operator+(const Coordinate &coor);
	*/
	//二元运算符-的成员函数重载
	Coordinate operator-(const Coordinate &coor);
	Coordinate(int x, int y) :ix(x), iy(y) {};
	/*负号重载为类的成员函数。
	Coordinate& operator -();
	*/
	void display();
private:
	int ix;
	int iy;
};
//负号重载为友元函数
Coordinate& operator-(Coordinate &coor) 
{
	coor.ix = -coor.ix;
	coor.iy = -coor.iy;
	return coor;
}
//++重载为友元函数
Coordinate& operator++(Coordinate &coor)
{
	coor.ix++; coor.iy++;
	return coor;
}
//后置++重载为友元函数
Coordinate& operator++(Coordinate &coor,int)
{
	Coordinate temp = coor;//后置++，先取出使用再++。
	coor.ix++; coor.iy++;
	return temp;
}
/*二元运算符 +的成员函数重载
Coordinate Coordinate:: operator+(const Coordinate &coor)
{
	Coordinate tem(0,0);
	tem.ix = this->ix + coor.ix;
	tem.iy = this->iy + coor.iy;
	return tem;
}
*/
//二元运算符 -的成员函数重载
Coordinate Coordinate::operator-(const Coordinate &coor)
{
	Coordinate tem(0,0);
	tem.ix = this->ix - coor.ix;
	tem.iy = this->iy - coor.iy;
	return tem;
}
/*-重载为类的成员函数,隐式推送了一个this指针，故少去一个参数。
Coordinate& Coordinate::operator-() {
	ix = -ix;
	iy = -iy;
	return *this;
}
*/
//+号友元函数重载
Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2)
{
	Coordinate temmp(0,0);
	temmp.ix = coor1.ix + coor2.ix;
	temmp.iy = coor1.iy + coor2.iy;
	return temmp;
}
//<<
ostream& operator<<(ostream &out, const Coordinate &coor)
{
	out <<"("<<coor.ix << "," << coor.iy<<")"<<endl;
	return out;
}
//打印函数。
void Coordinate::display() 
{
	cout<<"("<<ix<<","<<iy<<")"<<endl;
}

int main() {
	Coordinate coor(3,5);
	//负号重载
	coor.display();
	-coor;
	coor.display();
	//前置++
	++coor;
	coor.display();
	//后置++
	coor++;
	coor.display();
	//+
	Coordinate coor2(3,3);
	cout<<"x,y都加3"<<endl;
	(coor + coor2).display();
	//-
	Coordinate coor3(2, 2);
	cout<<"x,y都减2"<<endl;
	(coor + coor2 - coor3).display();
	//<<重载
	cout << "<<重载，打印coor3（2,2）" << endl;
	cout << coor3;

	system("pause");
	return 0;
}