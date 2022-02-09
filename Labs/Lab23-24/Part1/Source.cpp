#include <iostream>
#include <Windows.h>
#include<cmath>

using namespace std;
class GH
{
protected:
	int q = 0;
	double g = 0;
public:
	virtual void show() = 0;
};
class point
{
protected:
	int x, y;
public:
	point(int x, int y) :x(x), y(y)
	{
		x = x;
		y = y;
	}
	virtual void show()
	{
		cout << "Ñoordinates x = " << x << " Ñoordinates y = " << y << endl;
	}
	point operator++(int)
	{
		x = x + 1;
		y = y + 1;
		return *this;
	}
	point operator /(point obj)//class division
	{
		this->x = this->x / obj.x;
		this->y = this->y / obj.y;
		return  *this;
	}
	bool operator <=(int x)
	{
		return this->x <= x & this->y <= x;
	}
	~point()
	{}
};
class cude :public point
{
protected:
	int z, c;
public:
	cude(int x, int y, int z1, int c1) :point(x, y)
	{
		z = z1;
		c = c1;
	}
	void show() override
	{
		point::show();
		cout << "Ñoordinates z = " << z << " Ñoordinates c = " << c << endl;
	}
	double  sqare()
	{
		double r1;
		r1 = sqrt(pow(z - x, 2) + pow(c - y, 2));
		return r1;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	bool z = 0;
	point x(10, 24);
	point y(5, 12);
	x.show();
	y.show();
	cout << "division" << endl;
	x / y;
	x.show();
	cout << "addition" << endl;
	x++;
	x.show();
	cout << "comparison" << endl;
	z = y <= 20;
	if (z == true)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	cude q(12, 23, 45, 65);
	q.show();
	double p = 0;
	p = q.sqare();
	cout << p;
}
