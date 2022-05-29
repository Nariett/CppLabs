#include <iostream>
#include <queue>

using namespace std;

int main()
{
	system("chcp 1251");
	queue<int> q;
	cout << "Enter 7 numbers: \n";
	for (int i = 0; i < 7; i++)
	{
		int a;
		cout << "Enter number ¹ " << i << " : ";
		cin >> a;
		q.push(a);
	}
	cout << "The very first item in the queue: " << q.front() << endl;
	q.pop();
	cout << "New first element (deletion half): " << q.front() << endl;
	if (!q.empty())
	{
		cout << "The queue is not empty!\n";
	}
	while (q.empty() == false)
	{
		cout << "The queue does not put the first element in it: " << q.front() << " And the next element " << q.back() << " Remove the first element\n ";
		q.pop();
	}
	system("pause");
	return 0;
}
