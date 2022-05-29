#include < iostream>

using namespace std;
struct Stack
{
	char info;
	Stack* Next;
};

int Prior(char a)
{
	switch (a)
	{
	case '*':
	case '/':
	{
		return 3;
	}
	case '-':
	case '+':
	{
		return 2;
	}
	case '(':
	{
		return 1;
	}
	}
	return 0;
}

Stack* InS(Stack* t, char s)
{
	Stack* t1 = new Stack();
	if (!t1)
	{
		cout << "No memory for new element of stack.\n";
		return NULL;
	}
	t1->info = s;
	t1->Next = t;
	return t1;
}

Stack* OutS(Stack* t, char* s)
{
	Stack* t1 = t;
	*s = t->info;
	t = t->Next;
	delete t1;
	t1 = NULL;
	return t;
}

char* PolishStack(char* In, char* Out, Stack* t, Stack* Op)
{
	char a;
	int i = 0, j = 0;
	while (In[i] != '\0')
	{
		if (In[i] == ')')
		{
			while ((Op->info) != '(')
			{
				Op = OutS(Op, &a);
				if (!Op)
				{
					a = '\0';
				}
				Out[j++] = a;
			}
			t = Op;
			Op = Op->Next;
			delete t;
			t = NULL;
		}
		if (In[i] >= 'a' & In[i] <= 'z')
		{
			Out[j++] = In[i];
		}
		if (In[i] == '(')
		{
			Op = InS(Op, In[i]);
		}
		if (In[i] == '+' | In[i] == '-' | In[i] == '*' | In[i] == '/')
		{
			while (Op != NULL && Prior(Op->info) >= Prior(In[i]))
			{
				Op = OutS(Op, &a);
				Out[j++] = a;
			}
			Op = InS(Op, In[i]);
		}
		i++;
	}
	while (Op != NULL)
	{
		Op = OutS(Op, &a);
		Out[j++] = a;
	}
	Out[j] = '\0';
	return Out;
}

int main()
{
	system("chcp 1251");
	const int n = 50;
	Stack* T = NULL, * Op = NULL;
	char In[n];
	char* Out = new char[n];
	if (!Out)
	{
		cout << "No memmory for string of " << n << " characters.\n";
		return 0;
	}
	cout << "Enter an arithmetic expression (It is possible with brackets ( ), spaces and multi-character variables (it is better to start with a capital letter)):";
	cin.getline(In, n);
	cout << "You entee: " << In << endl;
	Out = PolishStack(In, Out, T, Op);
	cout << "Reverse Polish Notation (RPN): " << Out << endl;
	system("pause");
	return 0;
}