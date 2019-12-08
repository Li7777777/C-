#include<iostream>
using namespace std;

class Complex {
	double re, im;
	//<<
	friend ostream& operator<<(ostream &out, const Complex &c);
public:
	Complex(double r = 0, double i = 0)
	{
		re = r; im = i;
	}
	//+
	Complex operator+(Complex &c);
	//-=
	Complex operator-=(Complex &c);
	//*=
	Complex operator*=(Complex &c);
	// /=
	Complex operator/=(Complex &c);
	//ºóÖÃ++
	Complex operator++(int);
	void show();
};
void Complex::show()
{
	cout << re << "+" << im << "i" << endl;
}
//+
Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.re = this->re + c.re;
	temp.im = this->im + c.im;
	return temp;
}
//-=
Complex Complex::operator-=(Complex &c)
{
	this->re = this->re - c.re;
	this->im = this->im - c.im;
	return *this;
}
//*=
Complex Complex::operator*=(Complex &c)
{
	Complex temp = *this;
	temp.re = this->re*c.re-this->im*c.im;
	temp.im = this->im*c.re+this->re*c.im;
	*this = temp;
	return *this;
}
// /=
Complex Complex::operator/=(Complex &c)
{
	Complex temp = *this;
	temp.re = (this->re*c.re + this->im*c.im) / (c.re*c.re + c.im*c.im);
	temp.im = (this->im*c.re - this->re*c.im) / (c.re*c.re + c.im*c.im);
	*this = temp;
	return *this;
}
//ºóÖÃ++
Complex Complex::operator++(int)
{
	Complex temp=*this;
	this->re++;
	this->im++;
	return temp;
}
//<<
ostream& operator<<(ostream &out, const Complex &c)
{
	out << "(" << c.re << "," << c.im << ")";
	return out;
}
int main()
{
	Complex c1(1, 2), c2(3, 4), c3;
	c3 = c1 + c2;  	 c3.show();
	c3 -= c1;    	 c3.show();
	c3 *= c1;   	 c3.show();
	c3 /= c2; 	 c3.show();
	c3++;  		 c3.show();
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	system("pause");
	return 0;
}
