#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	int m, n, p;
	cout << "Enter the task number 1-5" << endl;
	cin >> p;
	switch (p)
	{
	case 1:
	{
		do
		{
			cout << "Enter the number of lines" << endl;
			cin >> m;
		} while (m < 1);
		do
		{
			cout << "Enter the number of columns" << endl;
			cin >> n;
		} while (n < 1);
		char** mas = new char* [m];
		if (mas == NULL)
		{
			cout << "No memory" << endl;
			system("pause");
			return 0;
		}
		for (int i = 0; i < m; i++)
		{
			mas[i] = new char[n];
			if (mas[i] == NULL)
			{
				cout << "No memory 2" << "\nFor line ¹" << i << endl;
				for (int j = 0; j < i; j++)
				{
					delete[] mas[j];
				}
				delete[] mas;
				mas = NULL;
				system("pause");
				return 0;
			}
		}
		cout << "Enter symbols" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> mas[i][j];
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mas[i][j] << " | ";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			delete[] mas[i];
		}
		delete[] mas;
		mas = NULL;
		break;
	}
	case 2:
	{
		do
		{
			cout << "Enter the number of lines" << endl;
			cin >> m;
		} while (m < 1);
		do
		{
			cout << "Enter the number of columns" << endl;
			cin >> n;
		} while (n < 1);
		double** mas = new double* [m];
		if (mas == NULL)
		{
			cout << "No memory " << endl;
			system("pause");
			return 0;
		}
		for (int i = 0; i < m; i++)
		{
			mas[i] = new double[n];
			if (mas[i] == NULL)
			{
				cout << "No memory" << "\nFor line ¹" << i << endl;
				for (int j = 0; j < i; j++)
				{
					delete[] mas[j];
				}
				delete[] mas;
				mas = NULL;
				system("pause");
				return 0;
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "Enter ar[" << i << "][" << j << "]" << endl;
				cin >> mas[i][j];
			}
		}
		cout << "Print array" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mas[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			delete[] mas[i];
		}
		delete[] mas;
		mas = NULL;
		break;
	}
	case 3:
	{
		int a = 2, b = 5;
		do
		{
			cout <<"Enter the number of lines" << endl;
			cin >> m;
		} while (m < 1);
		do
		{
			cout << "Enter the number of columns" << endl;
			cin >> n;
		} while (n < 1);
		int** mas = new int* [m];
		if (mas == NULL)
		{
			cout << "No memory 1" << endl;
			system("pause");
			return 0;
		}
		for (int i = 0; i < m; i++)
		{
			mas[i] = new int[n];
			if (mas[i] == NULL)
			{
				cout << "No memory 2" << "\nFor line ¹" << i << endl;
				for (int j = 0; j < i; j++)
				{
					delete[]mas[j];
					mas[j] = NULL;
				}
				delete mas;
				mas = NULL;
				system("pause");
				return 0;
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				mas[i][j] = a + rand() % (b - a + 1);
			}
		}
		cout << "Show massiv:" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << mas[i][j] << ";";
			}
			cout << endl;
		}
		cout << "Show reverse massiv :" << endl;
		for (int i = m - 1; i >= 0; i--)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				cout << mas[i][j] << " ; ";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			delete[] mas[i];
		}
		delete[] mas;
		mas = NULL;
		break;
	}
	case 4:
	{
		int u = 10;
		do
		{
			cout << "Enter the number of lines" << endl;
			cin >> m;
		} while (m < 1);
		do
		{
			cout << "Enter the number of columns" << endl;
			cin >> n;
		} while (n < 1);
		int** mas = new int* [m];
		if (mas == NULL)
		{
			cout << "No memory" << endl;
			system("pause");
			return 0;
		}
		for (int i = 0; i < m; i++)
		{
			mas[i] = new int[n];
			if (mas[i] == NULL)
			{
				cout << "No memory" << "\nFor line ¹" << i << endl;
				for (int j = 0; j < i; j++)
				{
					delete[]mas[j];
					mas[j] = NULL;
				}
				delete[] mas;
				mas = NULL;
				system("pause");
				return 0;
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				mas[i][j] = u;
				u = u - 3;
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mas[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				mas[i][j] = mas[i][j] * 4;
			}
		}
		cout << "Print new massiv:" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mas[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			delete[] mas[i];
		}
		delete[] mas;
		mas = NULL;
		system("pause");
		break;
	}
	case 5:
	{
		int a = 0, b = 10;
		do
		{
			cout << "Enter the number of lines" << endl;
			cin >> m;
		} while (m < 1);
		do
		{
			cout << "Enter the number of columns" << endl;
			cin >> n;
		} while (n < 1);
		int** mas = new int* [m];
		if (mas == NULL)
		{
			cout << "No memory" << endl;
			system("pause");
			return 0;
		}
		for (int i = 0; i < m; i++)
		{
			mas[i] = new int[n];
			if (mas[i] == NULL)
			{
				cout << "No memory" << "\nFor line ¹" << i << endl;
				for (int j = 0; j < i; j++)
				{
					delete[]mas[j];
					mas[j] = NULL;
				}
				delete[] mas;
				mas = NULL;
				system("pause");
				return 0;
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				mas[i][j] = a + rand() % (b - a + 1);
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mas[i][j] << " ";
			}
			cout << endl;
		}
		cout << "New vision of array:" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j)
				{
					cout << mas[i][j] << " ";
				}

			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			delete[] mas[i];
		}
		delete[] mas;
		mas = NULL;
		break;
	}
	}
	system("pause");
	return 0;
}
