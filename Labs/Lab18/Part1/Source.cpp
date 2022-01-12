#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct Student
{
	int age;
	double height;
	char name[15];
	char surname[20];
	bool sex;
}s;
bool f = false;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p = -1;
	while (p != 0)
	{
		cout << "1 - Text input\n2 - Printing text \n3 - Entering an array into a file \n4 - Printing an array from a file \n5 - Add structure a file\n6 - Read the structure \n7 -  Add structure a file(bin)\n8 - Read the structure(bin) \n0- complete the work\n";;
		cin >> p;
		switch (p)
		{
		case 1://add text 
		{
			char s[100];

			cout << "\nEnter txt up to 100 characters:\n";

			ofstream f("D:\\LAB\\Lab18\\Part1\\test.txt", ios::out | ios::app);
			if (!f)
			{
				cout << "Error file \n";
				break;
			}
			cin.ignore();
			cin.getline(s, 100);
			f << s << endl;
			f.close();
			break;
		}
		case 2://read text
		{
			char str[100];
			ifstream f1("D:\\LAB\\Lab18\\Part1\\test.txt", ios::in);
			if (!f1)
			{
				cout << "Error file \n";
				break;
			}
			f1.getline(str, 100, '\n');
			while (!f1.eof())
			{
				cout << str << endl;
				f1.getline(str, 100, '\n');
			}
			f1.close();
			cout << "File D:\LAB\Lab18\Part1\ test.txt read and close" << endl;
			break;
		}
		case 3://Add an array
		{
			const int n = 10;
			ofstream Ma("D:\\LAB\\Lab18\\Part1\\Mas.txt", ios::out | ios::trunc);
			if (!Ma)
			{
				cout << "Error file \n";
				break;
			}
			int mas[n];
			for (int i = 0; i < n; i++)
			{
				cout << "Enter the element ¹ " << i + 1 << endl;
				cin >> mas[i];
				Ma << mas[i] << "+";
			}
			Ma.close();
			break;
		}
		case 4://printing an array
		{
			ifstream Mr("D:\\LAB\\Lab18\\Part1\\Mas.txt", ios::in);
			if (!Mr)
			{
				cout << "Error file \n";
				break;
			}
			int x = 0;
			Mr >> x;
			while (!Mr.eof())
			{
				cout << x << '+';
				Mr >> x;
			}
			cout << endl;
			Mr.close();
			cout << "File D:\\LAB\\Lab18\\Part1\\Mas.txt read and close" << endl;
			break;
		}
		case 5://add structure
		{
			cout << "Age ";
			cin >> s.age;
			cout << "Height ";
			cin >> s.height;
			cout << "Surname ";
			cin.ignore();
			cin.getline(s.surname, 20);
			cout << "Name ";
			cin >> s.name;
			cout << "Sex (1 - Man ) ";
			cin >> s.sex;
			cout << "You have entered the data" << " " << s.age << " " << s.height << " " << s.surname << " " << s.name << endl;
			if (s.sex == 0)
			{
				cout << "Woman ";
			}
			else
			{
				cout << "Man ";
			}
			f = true;
			if (f == false)
			{
				cout << "No data to write" << endl;
				break;
			}
			ofstream wtf("D:\\LAB\\Lab18\\Part1\\Struct.txt", ios::out | ios::app);
			if (!wtf)
			{
				cout << "Error" << endl;
				break;
			}
			wtf << s.surname << " " << s.name << " " << s.age << " " << s.height << " " << s.sex << endl;
			wtf.close();
			cout << "Data is written to a file D:\\LAB\\Lab18\\Part1\\Struct.txt" << endl;
			break;
		}
		case 6://reading the structure
		{
			ifstream rtf("D:\\LAB\\Lab18\\Part1\\Struct.txt", ios::in);
			if (!rtf)
			{
				cout << "Error" << endl;
				break;
			}
			Student s1;
			rtf >> s1.surname >> s1.name >> s1.age >> s1.height >> s1.sex;
			while (!rtf.eof())
			{
				cout << s1.surname << "|" << s1.name << "|" << s1.age << "|" << s1.height << "|" << s1.sex << endl;
				rtf >> s1.surname >> s1.name >> s1.age >> s1.height >> s1.sex;
			}
			rtf.close();
			cout << "Data reàd from file D:\\LAB\\Lab18\\Part1\\Struct.txt" << endl;
			break;
		}
		case 7://writing a structure to a binary file
		{
			cout << "Age ";
			cin >> s.age;
			cout << "Height ";
			cin >> s.height;
			cout << "Surname ";
			cin.ignore();
			cin.getline(s.surname, 20);
			cout << "Name ";
			cin >> s.name;
			cout << "Sex (1 - Man ) ";
			cin >> s.sex;
			cout << "You have etered the data " << " " << s.age << " " << s.height << " " << s.surname << " " << s.name << endl;
			if (s.sex == 0)
			{
				cout << "Woman ";
			}
			else
			{
				cout << "Man ";
			}
			f = true;
			if (f == false)
			{
				cout << "No data to write" << endl;
				break;
			}
			ofstream wbf("D:\\LAB\\Lab18\\Part1\\Structbin.dat", ios::out | ios::app | ios::binary);
			if (!wbf)
			{
				cout << "Error" << endl;
				break;
			}
			wbf.write((char*)&s, sizeof(s));
			wbf.close();//closing the stream
			cout << "File in D:\\LAB\\Lab18\\Part1\\Structbin.dat recorded";
			break;
		}
		case 8://reading a structure from a binary file 
		{
			Student s0;
			ifstream rbf("D:\\LAB\\Lab18\\Part1\\Structbin.dat", ios::in | ios::binary);
			if (!rbf)
			{
				cout << "Error";
				break;
			}
			rbf.read((char*)&s0, sizeof(Student));
			while (!rbf.eof())
			{
				cout << s0.surname << "\t|\t" << s0.name << "\t|\t" << s0.age << "\t|\t" << s0.height << "\t|\t";
				if (s0.sex == 0)
				{
					cout << "Woman ";
				}
				else
				{
					cout << "Man ";
				}
				f = true;
				rbf.close();
				cout << "File D:\\LAB\\Lab18\\Part1\\Structbin.dat read and close";
				break;
			}
		}
		case 0:
		{
			cout << "Completion of work" << endl;
			break;
		}
		default:
		{
			cout << "Input error.Please try again" << endl;
			break;
		}
		}
	}
	system("pause");
	return 0;
}