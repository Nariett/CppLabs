#include <iostream>
#include <Windows.h>
using namespace std;

struct worke
{
	char nameCOM[30];//Company name 
	int age;
	double weight;//kg
	bool sex;//true woman,false man
	int mas[7];//working days
	char work[2];//workplace requirements
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	worke d = { "google",16,60.5,true,{0,1,1,1,0,1,0},"$" };//1
	cout << "Company name: " << d.nameCOM << "\nAge: " << d.age << "\nWeight: " << d.weight << endl;
	if (d.sex == true)
	{
		cout << "Female" << endl;
	}
	else
	{
		cout << "Male" << endl;
	}
	cout << "|\tMo\t|\tTu\t|\tWe\t|\tTh\t|\tFr\t|\tSa\t|\tSu\t|" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "|\t" << d.mas[i] << "\t";
	}
	cout << endl;
	cout << "Second currency for salary:" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << d.work[i] << endl;
	}
	worke a;////2
	cout << "Enter company name" << endl;
	cin >> a.nameCOM;
	cout << "Enter age" << endl;
	cin >> a.age;
	cout << "Enter weight" << endl;
	cin >> a.weight;
	cout << "Enter sex (0 or 1)" << endl;
	cin >> a.sex;
	cout << "Enter work schedule (0 or 1)" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter day " << i + 1 << endl;
		cin >> a.mas[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Second currency for salary" << i + 1 << endl;
		cin >> a.work[i];
	}
	cout << "Company name: " << a.nameCOM << "\nAge: " << a.age << "\nWeigth: " << a.weight << endl;
	if (a.sex == true)
	{
		cout << "Female" << endl;
	}
	else
	{
		cout << "Male" << endl;
	}
	cout << "|\tMo\t|\tTu\t|\tWe\t|\tTh\t|\tFr\t|\tSa\t|\tSu\t|" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "|\t" << a.mas[i] << "\t";
	}
	cout << endl;
	cout << "Second currency for salary:" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << a.work[i] << endl;
	}
	worke* c;
	cout << "Enter company name" << endl;
	cin >> (*c).nameCOM;
	cout << "Enter age" << endl;
	cin >> (*c).age;
	cout << "Enter weight" << endl;
	cin >> (*c).weight;
	cout << "Enter sex (0 or 1)" << endl;
	cin >> (*c).sex;
	cout << "Enter work schedule (0 or 1)" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter day " << i + 1 << endl;
		cin >> (*c).mas[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Second currency for salary " << i + 1 << endl;
		cin >> (*c).work[i];
	}
	cout << "Company name: " << (*c).nameCOM << "\nAge: " << (*c).age << "\nWeight: " << (*c).weight << endl;
	if ((*c).sex == true)
	{
		cout << "Female" << endl;
	}
	else
	{
		cout << "Male" << endl;
	}
	cout << "|\tMo\t|\tTu\t|\tWe\t|\tTh\t|\tFr\t|\tSa\t|\tSu\t|" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "|\t" << (*c).mas[i] << "\t";
	}
	cout << endl;
	cout << "Second currency for salary:" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << (*c).work[i] << endl;
	}
	worke* s = &d;
	cout << "Enter company name" << endl;
	cin >> (*s).nameCOM;
	cout << "Enter age" << endl;
	cin >> (*s).age;
	cout << "Enter weight " << endl;
	cin >> (*s).weight;
	cout << "Enter sex (0 or 1)" << endl;
	cin >> (*s).sex;
	cout << "¬ведите рабочий график (0 or 1)" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "¬ведите день " << i + 1 << endl;
		cin >> (*s).mas[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "Second currency for salary " << i + 1 << endl;
		cin >> (*s).work[i];
	}
	cout << "Company name:  " << (*s).nameCOM << "\nAge: " << (*s).age << "\nWeight " << (*s).weight << endl;
	if ((*s).sex == true)
	{
		cout << "Female" << endl;
	}
	else
	{
		cout << "Male" << endl;
	}
	cout << "|\tMo\t|\tTu\t|\tWe\t|\tTh\t|\tFr\t|\tSa\t|\tSu\t|" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "|\t" << (*s).mas[i] << "\t";
	}
	cout << endl;
	cout << "Second currency for salary:" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << (*s).work[i] << endl;
	}
	system("pause");
	return 0;
}