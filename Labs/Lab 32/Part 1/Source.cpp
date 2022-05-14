#include <iostream>
#include <string>
#include <list>

using namespace std;

int func_hash_name(string name);
int func_hash_group(string group);

struct Student
{
	string name;
	string group;
	int Hmark;
	int Imark;
	int Pmark;
	int hash_name;
	int hash_group;
	void enter()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter group: ";
		cin >> group;
		cout << "Enter History mark: ";
		cin >> Hmark;
		cout << "Enter Informatics mark: ";
		cin >> Imark;
		cout << "Enter Physics marl: ";
		cin >> Pmark;
		hash_name = func_hash_name(name);
		hash_group = func_hash_group(group);
	}
	void show()
	{
		cout << "Name" << "\t" << name << "\t|\t";
		printf("%x", hash_name);
		cout << endl;
		cout << "Group" << "\t" << group << "\t|\t";
		printf("%x", hash_group);
		cout << endl;
		cout << "History mark" << "\t" << Hmark << endl;
		cout << "Informatics mark" << "\t" << Imark << endl;
		cout << "Physics marl:" << "\t" << Pmark << endl;
		cout << "Average mark:" << "\t" << (Hmark + Imark + Pmark) / 3 << endl;

	}
};
int func_hash_name(string name)
{
	unsigned long long int tmp_hash = 0;
	for (int i = 0; i < name.length(); i++)
	{
		tmp_hash += name[i] / name.length();
		tmp_hash *= 'a' + i;
	}
	return tmp_hash;
}
int func_hash_group(string group)
{
	unsigned long long int tmp_hash = 0;
	for (int i = 0; i < group.length(); i++)
	{
		tmp_hash += group[i] / group.length();
		tmp_hash *= 'z' - i;
	}
	return tmp_hash;
}

int main()
{
	list<Student> mas;
	bool exit = true;
	while (exit)
	{
		int menu;
		cout << "1 - Add Student: \n2 - Delete Student\n3 - Show table\n0 - exit\nEnter: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			Student value;
			value.enter();
			mas.push_back(value);
			cout << "Receipt was added\n";
			break;
		}
		case 2:
		{
			if (mas.begin() != mas.end())
			{
				string del_kode;
				int del_hash_kode;
				bool found = false;
				cout << "Enter Name of students wich you want to delete: ";
				cin >> del_kode;
				del_hash_kode = func_hash_name(del_kode);
				for (list<Student>::iterator i = mas.begin(); i != mas.end(); i++)
				{
					if (i->hash_name == del_hash_kode)
					{
						mas.erase(i);
						cout << "Receipt was deleted\n";
						found = true;
						break;
					}
				}
				if (found == false)
				{
					cout << "Receipt wasn't found\n";
				}
			}
			else
			{
				cout << "No receipts to delete\n";
			}
			break;
		}
		case 3:
		{
			if (mas.begin() != mas.end())
			{
				for (list<Student>::iterator i = mas.begin(); i != mas.end(); i++)
				{
					cout << "-----------------------------------------------------\n";
					i->show();
					cout << "-----------------------------------------------------\n";
				}
			}
			else
			{
				cout << "No receipts to show\n";
			}
			break;
		}
		case 0:
		{
			exit = false;
			break;
		}
		default:
			cout << "Invalid operation selected\n";
			break;
		}
	}

	system("pause");
	return 0;
}
