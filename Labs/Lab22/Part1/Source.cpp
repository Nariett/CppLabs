#include <iostream>
#include <windows.h>

using namespace std;

class van
{
protected:
	int num;
public:
	van(int n)
	{
		num = n;
	}
	virtual void show()
	{
		cout << "Van number " << num << endl;
	}
	van()
	{}
};
class carvan :public van
{
protected:
	int num2, car;///////////////
public:
	carvan(int n, int n2, int c) :van(n)
	{
		num2 = n;
		car = c;
	}
	void show() override
	{
		cout << "Iformation about the van " << endl;
		van::show();
		cout << "Information about type van" << endl;
		cout << "Carvan Number " << num2 << "\nCapacity of car per van " << car << endl;
	}
};
class oilvan :public van
{
protected:
	int num3, oil;
public:
	oilvan(int n, int n3, int o) :van(n)
	{
		num3 = n3;
		oil = o;
	}
	void show() override
	{
		cout << "Iformation about the van " << endl;
		van::show();
		cout << "Oilvan number " << num3 << "\nCapacity in oilvan " << oil << endl;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	carvan x(12, 15, 55);
	x.show();
	oilvan* gaz = new oilvan(66, 22, 65);
	gaz->show();
	x.~carvan();
}