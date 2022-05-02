#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

struct Student
{
	string Surname;
	int group;
	int Phmark;
	int Inmark;
	int Himark;
};
struct Array {
	Student* value = NULL;
	Array* past = NULL;
	Array* next = NULL;
	void add(Student* value) {
		if (this->value == NULL) {
			this->value = value;
		}
		else {
			if (this->next == NULL) {
				this->next = new Array;
				this->next->past = this;
				this->next->value = value;
			}
			else {
				this->next->add(value);
			}
		}
	}
	void del() {
		if (this->past != NULL) {
			this->past->next = this->next;
		}
		if (this->next != NULL) {
			this->next->past = this->past;
		}
		delete this;
	}
	void addBefore(Student* value) {//добавить до 
		if (this->value == NULL) {
			this->value = value;
		}
		else {
			if (this->past == NULL) {
				this->past = new Array;
				this->past->next = this;
				this->past->value = value;
			}
			else {
				Array* ar = new Array;
				ar->past = this->past;
				ar->next = this;
				this->past->next = ar;
				this->past = ar;
				this->past->value = value;
			}
		}
	}
	void addAfter(Student* value) {
		if (this->value == NULL) {
			this->value = value;
		}
		else {
			if (this->next == NULL) {
				this->next = new Array;
				this->next->past = this;
				this->next->value = value;
			}
			else {
				Array* ar = new Array;
				ar->next = this->next;
				ar->past = this;
				this->next->past = ar;
				this->next = ar;
				this->next->value = value;
			}
		}
	}
};

void print(Student* man) {
	cout << "\nSurname: " << man->Surname << "\nGroup: " << man->group << "\nPhysics marks: " << man->Phmark << "\nInform Mark: " << man->Inmark << "\nHistory Mark: " << man->Himark;
};
int main() {
	system("chcp 1251");
	Array* array0 = new Array;
	array0->add(new  Student{ "Sasha",10,9,9,9 });
	array0->add(new  Student{ "Petr",2,6,3,8 });
	array0->add(new  Student{ "Kit",5,2,8,6 });
	for (Array* a = array0; a != NULL; a = a->next) {
		print(a->value);
	}
	cout << endl;
	cout << endl;
	delete array0->next->value;
	array0->next->del();
	for (Array* a = array0; a != NULL; a = a->next) {
		print(a->value);
	}
	cout << endl;
	cout << endl;
	array0->addAfter(new Student{ "Kolya",7,8,8,9 });
	array0->next->addBefore(new Student{ "Rot",2,5,7,8 });
	for (Array* a = array0; a != NULL; a = a->next) {
		print(a->value);
	}
	system("pause");
	return 0;
}
