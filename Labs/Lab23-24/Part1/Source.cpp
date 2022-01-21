#include <iostream>
#include <Windows.h>

using namespace std;

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
};
//class square : public point
//{
//protected:
//	int z, c;
//public:
//
//};
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



}
