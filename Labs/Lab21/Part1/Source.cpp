#include <iostream>
#include <Windows.h>

using namespace std;

class Point
{
protected:
	int x, y;
public:
	Point(int x0, int y0)
	{
		x = x0;
		y = y0;
	}
	void show()
	{
		cout << "Coordinates x = " << x << "\nCoordinates y = " << y << endl;
	}
};
class line : public Point
{
protected:
	int x1, y1;
public:
	void show()
	{
		Point::show();
		cout << "Coordinates x1 = " << x1 << "\nCoordinates y1 = " << y1 << endl;
	}
	line(int px, int py, int o, int q) :Point(o, q)
	{
		x1 = px;
		y1 = py;
	}
	double leight()
	{
		double l = sqrt(pow((x - x1), 2) + pow((y - y1), 2));
		return l;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Point first(12, 54);//point 
	first.show();
	line inv(10, 22, 11, 23);//line
	inv.show();
	double leigh = inv.leight();
	cout << leigh;
}