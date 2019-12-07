#include<iostream>
#include<string>
using namespace std;

class Coordinate
{
//-����Ϊ��Ԫ����
friend Coordinate& operator-(Coordinate &coor);
//++����Ϊ��Ԫ����
friend Coordinate& operator++(Coordinate &coor);
//����++����Ϊ��Ԫ����
friend Coordinate& operator++(Coordinate &coor, int);
//+����Ԫ��������
friend Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2);
//<<
friend ostream& operator<<(ostream &out, const Coordinate &coor);

public:
	/*��Ԫ�����+�ĳ�Ա��������
	Coordinate operator+(const Coordinate &coor);
	*/
	//��Ԫ�����-�ĳ�Ա��������
	Coordinate operator-(const Coordinate &coor);
	Coordinate(int x, int y) :ix(x), iy(y) {};
	/*��������Ϊ��ĳ�Ա������
	Coordinate& operator -();
	*/
	void display();
private:
	int ix;
	int iy;
};
//��������Ϊ��Ԫ����
Coordinate& operator-(Coordinate &coor) 
{
	coor.ix = -coor.ix;
	coor.iy = -coor.iy;
	return coor;
}
//++����Ϊ��Ԫ����
Coordinate& operator++(Coordinate &coor)
{
	coor.ix++; coor.iy++;
	return coor;
}
//����++����Ϊ��Ԫ����
Coordinate& operator++(Coordinate &coor,int)
{
	Coordinate temp = coor;//����++����ȡ��ʹ����++��
	coor.ix++; coor.iy++;
	return temp;
}
/*��Ԫ����� +�ĳ�Ա��������
Coordinate Coordinate:: operator+(const Coordinate &coor)
{
	Coordinate tem(0,0);
	tem.ix = this->ix + coor.ix;
	tem.iy = this->iy + coor.iy;
	return tem;
}
*/
//��Ԫ����� -�ĳ�Ա��������
Coordinate Coordinate::operator-(const Coordinate &coor)
{
	Coordinate tem(0,0);
	tem.ix = this->ix - coor.ix;
	tem.iy = this->iy - coor.iy;
	return tem;
}
/*-����Ϊ��ĳ�Ա����,��ʽ������һ��thisָ�룬����ȥһ��������
Coordinate& Coordinate::operator-() {
	ix = -ix;
	iy = -iy;
	return *this;
}
*/
//+����Ԫ��������
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
//��ӡ������
void Coordinate::display() 
{
	cout<<"("<<ix<<","<<iy<<")"<<endl;
}

int main() {
	Coordinate coor(3,5);
	//��������
	coor.display();
	-coor;
	coor.display();
	//ǰ��++
	++coor;
	coor.display();
	//����++
	coor++;
	coor.display();
	//+
	Coordinate coor2(3,3);
	cout<<"x,y����3"<<endl;
	(coor + coor2).display();
	//-
	Coordinate coor3(2, 2);
	cout<<"x,y����2"<<endl;
	(coor + coor2 - coor3).display();
	//<<����
	cout << "<<���أ���ӡcoor3��2,2��" << endl;
	cout << coor3;

	system("pause");
	return 0;
}