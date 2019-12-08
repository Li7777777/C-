#include<iostream>
#include<string>
using namespace std;
class Rectangle
{
public:
	Rectangle()
	{
		left = 0;
		right = 0;
		top = 0;
		bottom = 0;
	}
	~Rectangle() { cout <<"xg"<< endl; }

	void set(int l, int r, int t, int b)
	{
		left = l;
		right = r;
		top = t;
		bottom = b;
	}
	void display()
	{
		cout <<left<<","<<top<<"  "<<right<<","<<bottom<< endl;
	}
private:
	int left, right, top, bottom;
};
int main()
{
	Rectangle r1;
	Rectangle r2 = r1;
	r1.set(1, 2, 3, 4);
	r1.display();
	r2.set(5, 6, 7, 8);
	r2.display();
	system("pause");
}
