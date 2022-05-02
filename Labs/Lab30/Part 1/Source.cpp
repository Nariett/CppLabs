#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct queue
{
	int* arr = new int[NULL];
	int head = 0;
	int tail = 0;
	int* change_size(int* old_arr, int size, int change_size)
	{
		int* change_arr = new int[change_size];
		for (int i = 0; i < ((size < change_size) ? size : change_size); i++)
		{
			change_arr[i] = old_arr[i];
		}
		delete[] old_arr;
		return change_arr;
	}
	void push(int x)
	{
		arr = change_size(arr, tail, tail + 1);
		arr[tail] = x;
		tail++;
	}
	int pop()
	{
		if (head != tail)
		{
			int tmp = arr[head];
			for (int i = 0; i < tail; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr = change_size(arr, tail, tail - 1);
			tail--;
			return tmp;
		}
		else
		{
			cout << "ERROR, attempt to exract an item from an empty queue.\n";
			return -1;
		}

	}
	bool is_empty()
	{
		return head == tail;
	}
	int show_elements(int x)
	{

		if (x > tail);
		{
			cout << "Error, x > size queue";
			return 0;
		}
		cout << "Elements ¹ " << x << " it is " << arr[x];
		return 0;
	}
	int show_queue()
	{
		for (int i = 0; i < tail; i++)
		{
			cout << arr[i] << " ";
		}
		return 0;
	}
	int changes(int x, int i)
	{
		arr[i] = x;
		return 0;
	}
};
void function_queue()
{
	queue my_queue;
	int element_queue;
	int menu = 0;
	bool exit_menu = true;
	int num = 0;
	while (exit_menu)
	{
		cout << "\n1 - Enter add element in queue\n2 - Enter to extract element queue\n3 - Enter check empty\n4 - Show queue\n5 - Show elementes\n6 - Changes elements \n0 - enter exit\nEnter number: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Enter elemnt stack: ";//add elements 
			cin >> element_queue;
			my_queue.push(element_queue);
			break;
		}
		case 2:
		{
			element_queue = my_queue.pop();
			cout << "Enter queue:" << element_queue << endl;
			break;
		}
		case 3:
		{
			cout << "Queue is empry:" << ((my_queue.is_empty() == true) ? "true" : "false") << endl;
			break;
		}
		case 4:
		{
			cout << "Queue consinst of " << endl;
			my_queue.show_queue();
			break;
		}
		case 5:
		{
			cout << "Enter index elements " << endl;
			cin >> num;
			my_queue.show_elements(num);
			break;

		}
		case 6:
		{
			int x, i;
			cout << "Enter the index you want to changes" << endl;
			cin >> i;
			cout << "Enter number " << endl;
			cin >> x;
			my_queue.changes(x, i);
			break;
		}
		default:
		{
			exit_menu = false;
			break;
		}
		}
	}
}
int main()
{
	system("chcp 1251");
	int menu = 0;
	bool exit_menu = true;
	function_queue();
}