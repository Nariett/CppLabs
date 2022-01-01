#include <iostream>
#include <Windows.h>
using namespace std;
double mainMas(double**, int, int);
double sumMas(double**, int, int);
int number(double**, int, int);
double maxMas(double**, int, int, int&);
double mainMas(double** mas, int x, int y)
{
	double sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (i == j)
			{
				sum += mas[i][j];
			}
		}
	}
	return sum;
}
double sumMas(double** mas, int x, int y)
{
	double sumx = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (i != j)
			{
				sumx += mas[i][j];
			}
		}
	}
	return sumx;
}
double maxMas(double** mas, int x, int y, int& px)
{
	double Max = mas[0][0];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (Max < mas[i][j])
			{
				Max = mas[i][j];
			}
		}
	}
	int counter = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (mas[i][j] == Max)
			{
				counter++;
			}
		}
	}
	px = counter;
	return Max;
}
int number(double** mas, int x, int y)
{
	int counter = 0, fcounter = 0;
	double aver = 0, sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			sum += mas[i][j];
			counter++;
		}
	}
	aver = sum / counter;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (mas[i][j] < aver)
			{
				fcounter++;
			}
		}
	}
	return fcounter;
}