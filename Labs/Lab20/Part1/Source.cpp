#include <iostream>
#include <windows.h>

using namespace std;

class wear
{
private:
	int size;
	double mass;
	char q;
	bool sex;
	char model[10];
public:
	wear()
	{

	}
	wear(int s, double m, char q, bool sex, char model[])
	{
		Setsize(s);
		Setmass(m);
		Setq(q);
		Setsex(sex);
		Setmodel(model);
	}
	~wear()
	{}
	int Getsize()
	{
		return size;
	}
	int Setsize(int s)
	{
		if (s > 0 && s < 100)
		{
			size = s;
			return size;
		}
		else
		{
			return -1;
		}
	}
	double Getmass()
	{
		return mass;
	}
	double Setmass(double m)
	{
		if (m > 0 && m < 500)
		{
			mass = m;
			return mass;
		}
	}
	char Getq()
	{
		return q;
	}
	char Setq(char q)
	{
		q = q;
		return q;
	}
	bool Getsex()
	{
		return sex;
	}
	bool Setsex(bool s)
	{
		sex = s;
		return sex;
	}
	char* Getmodel()
	{
		return model;
	}
	char* Setmodel(char m[])
	{
		if (strlen(m) > 0)
		{
			strcpy_s(model, strlen(m) + 1, m);
			return model;
		}
		else
		{
			return model;
		}
	}
	double sqare(double s)
	{
		double d = 1 + (s - 28) * 0.1;
		if (d > 1)
		{
			return d;
		}
		else
		{
			return d * 1.3;

		}

	}
	void print()
	{
		cout << "Model name " << Getmodel() << "\nSomething " << Getq() << "\nMass " << Getmass() << "\nSize " << Getsize() << "\nSex ";
		if (Getsex() == true)
		{
			cout << "Male gender " << endl;
		}
		else
		{
			cout << "Female gender " << endl;
		}
	}

};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	wear nike;
	nike.print();
	char name[] = "Nike th";
	nike.Setmodel(name);
	nike.Setsize(32);
	nike.Setq('M');
	nike.Setmass(255.0);
	nike.Setsex(1);
	nike.print();
	double sqare = nike.sqare(nike.Getsize());
	cout << "sqare " << sqare << endl;
	//wear w(1,52.5, "M", true, "NikeTH");
	//w.print();
	int a;
	cout << "Enter a nem " << endl;
	cin >> a;
	double b;
	cout << "Enter the mass " << endl;
	cin >> b;
	char q;
	cout << "Enter something " << endl;
	cin >> q;
	bool s;
	cout << "Sex " << endl;
	cin >> s;
	char mas[] = "adidas";
	wear* adidas = new wear(a, b, q, s, mas);
	adidas->print();
}