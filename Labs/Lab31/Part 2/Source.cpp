#include <iostream>
#include <string>

using namespace std;

struct DataField
{
	string Surname = "";
	int data = 0;
	string street = "";
	void inpute();
	void show();
	void set_random();
};
struct BinareTree
{
	DataField data_field;
	BinareTree* left = nullptr;
	BinareTree* right = nullptr;
};
void DataField::inpute()
{
	cout << "Enter Surname: ";
	cin >> Surname;
	cout << "Enter data: ";
	cin >> data;
	cout << "Enter street: ";
	cin >> street;
}
void DataField::show()
{
	cout << "Surname: " << Surname << "\t Data " << data << "\t Street " << street << endl;
}
void DataField::set_random()
{
	data = rand() % 100;
	for (int i = 0; i < 5; i++)
	{
		Surname += 'a' + rand() % ('z' - 'a' + 1);
	}
	for (int i = 0; i < 5; i++)
	{
		street += 'a' + rand() % ('z' - 'a' + 1);
	}
}
void treeprint(BinareTree* tree);
void treeprint_byname(string name, BinareTree* tree);
BinareTree* add_note(DataField x, BinareTree* tree);
void delete_tree(BinareTree* tree);
void delete_branches(BinareTree* tree);
BinareTree* find_the_knot_tree(string name_delete, BinareTree* tree);
BinareTree* find_the_knot_tree_data(int data, BinareTree* tree);
BinareTree* find_the_knot_tree_street(string street, BinareTree* tree);
BinareTree* copy_tree(BinareTree* tree, BinareTree* find_element_copy);
BinareTree* subfunction_delete_element_tree(string name_delete, BinareTree* new_tree, BinareTree* old_tree);
BinareTree* delete_element_tree(string name_delete, BinareTree* tree);
BinareTree* find_parent_tree(BinareTree* element_tree, BinareTree* tree);
BinareTree* delete_element_tree2(string name_delete, BinareTree* tree);
BinareTree* delete_element_tree2_data(int data, BinareTree* tree);
BinareTree* delete_element_tree2_street(string street, BinareTree* tree);
int Count(BinareTree* tree);
void treeprint(BinareTree* tree)
{
	if (tree != nullptr)
	{
		treeprint(tree->left);
		treeprint(tree->right);
		tree->data_field.show();
	}
}
void treeprint_byname(string name, BinareTree* tree)
{
	if (tree != nullptr && tree->data_field.Surname == name)
	{
		treeprint_byname(name, tree->left);
		treeprint_byname(name, tree->right);
		tree->data_field.show();
	}
}
BinareTree* add_note(DataField x, BinareTree* tree)
{
	if (tree == nullptr)
	{
		tree = new BinareTree();
		tree->data_field = x;
		tree->left = nullptr;
		tree->right = nullptr;
	}
	else
	{
		if (x.Surname < (tree->data_field).Surname)
		{
			tree->left = add_note(x, tree->left);
		}
		else
			tree->right = add_note(x, tree->right);
	}
	return tree;
}
void delete_tree(BinareTree* tree)
{
	if (tree != nullptr)
	{
		delete_tree(tree->left);
		delete_tree(tree->right);
		delete tree;

	}
}
void delete_branches(BinareTree* tree)
{
	delete_tree(tree->left);
	delete_tree(tree->right);
	tree->left = nullptr;
	tree->right = nullptr;
}
BinareTree* find_the_knot_tree(string name_delete, BinareTree* tree)
{
	if (tree != nullptr)
	{
		if (tree->data_field.Surname == name_delete)
		{
			return tree;
		}
		else
		{
			if (name_delete < (tree->data_field).Surname)
			{
				return find_the_knot_tree(name_delete, tree->left);
			}
			else
			{
				return find_the_knot_tree(name_delete, tree->right);
			}
		}

	}
	return nullptr;
}
BinareTree* find_the_knot_tree_data(int data, BinareTree* tree)
{
	if (tree != nullptr)
	{
		if (tree->data_field.data == data)
		{
			return tree;
		}
		else
		{
			if (data < (tree->data_field).data)
			{
				return find_the_knot_tree_data(data, tree->left);
			}
			else
			{
				return find_the_knot_tree_data(data, tree->right);
			}
		}
	}
	return nullptr;
}
BinareTree* find_the_knot_tree_street(string street, BinareTree* tree)
{
	if (tree != nullptr)
	{
		if (tree->data_field.street == street)
		{
			return tree;
		}
		else
		{
			if (street < (tree->data_field).street)
			{
				return find_the_knot_tree_street(street, tree->left);
			}
			else
			{
				return find_the_knot_tree_street(street, tree->right);
			}
		}
	}
	return nullptr;
}
BinareTree* copy_tree(BinareTree* tree, BinareTree* find_element_copy)
{
	if (find_element_copy != nullptr)
	{
		tree = add_note(find_element_copy->data_field, tree);
		tree = copy_tree(tree, find_element_copy->left);
		tree = copy_tree(tree, find_element_copy->right);
	}
	return tree;
}
BinareTree* subfunction_delete_element_tree(string name_delete, BinareTree* new_tree, BinareTree* old_tree)
{
	if (old_tree != nullptr)
	{
		if (old_tree->data_field.Surname != name_delete)
		{
			new_tree = add_note(old_tree->data_field, new_tree);
		}
		new_tree = subfunction_delete_element_tree(name_delete, new_tree, old_tree->left);
		new_tree = subfunction_delete_element_tree(name_delete, new_tree, old_tree->right);
	}
	return new_tree;
}
BinareTree* delete_element_tree(string name_delete, BinareTree* tree)
{
	BinareTree* tmp_tree = nullptr;
	tree = subfunction_delete_element_tree(name_delete, tmp_tree, tree);
	delete_tree(tmp_tree);
	delete tmp_tree;
	return tree;
}
BinareTree* find_parent_tree(BinareTree* element_tree, BinareTree* tree)
{
	if (tree != nullptr && tree != element_tree)
	{
		if (tree->left == element_tree || tree->right == element_tree)
			return tree;
		else
		{
			if ((element_tree->data_field).Surname < (tree->data_field).Surname)
				return find_parent_tree(element_tree, tree->left);
			else
				return find_parent_tree(element_tree, tree->right);
		}
	}
	return tree;
}
BinareTree* delete_element_tree2(string name_delete, BinareTree* tree)
{
	BinareTree* find_element_tree = find_the_knot_tree(name_delete, tree);
	BinareTree* parent_element = find_parent_tree(find_element_tree, tree);
	BinareTree* tmp_tree = nullptr;
	tmp_tree = copy_tree(tmp_tree, find_element_tree->left);
	tmp_tree = copy_tree(tmp_tree, find_element_tree->right);
	if (tree == find_element_tree)
	{
		delete_branches(find_element_tree);
		tree = nullptr;
	}
	else
	{
		if (parent_element->left == find_element_tree)
		{
			delete_branches(find_element_tree);
			parent_element->left = nullptr;
		}
		else
		{
			if (parent_element->right == find_element_tree)
			{
				delete_branches(find_element_tree);
				parent_element->right = nullptr;
			}
		}
	}
	tree = copy_tree(tree, tmp_tree);
	return tree;
}
BinareTree* delete_element_tree2_data(int data, BinareTree* tree)
{
	BinareTree* find_element_tree = find_the_knot_tree_data(data, tree);
	BinareTree* parent_element = find_parent_tree(find_element_tree, tree);
	BinareTree* tmp_tree = nullptr;
	tmp_tree = copy_tree(tmp_tree, find_element_tree->left);
	tmp_tree = copy_tree(tmp_tree, find_element_tree->right);
	if (tree == find_element_tree)
	{
		delete_branches(find_element_tree);
		tree = nullptr;
	}
	else
	{
		if (parent_element->left == find_element_tree)
		{
			delete_branches(find_element_tree);
			parent_element->left = nullptr;
		}
		else
		{
			if (parent_element->right == find_element_tree)
			{
				delete_branches(find_element_tree);
				parent_element->right = nullptr;
			}
		}
	}
	tree = copy_tree(tree, tmp_tree);
	return tree;
}
BinareTree* delete_element_tree2_street(string street, BinareTree* tree)
{
	BinareTree* find_element_tree = find_the_knot_tree_street(street, tree);
	BinareTree* parent_element = find_parent_tree(find_element_tree, tree);
	BinareTree* tmp_tree = nullptr;
	tmp_tree = copy_tree(tmp_tree, find_element_tree->left);
	tmp_tree = copy_tree(tmp_tree, find_element_tree->right);
	if (tree == find_element_tree)
	{
		delete_branches(find_element_tree);
		tree = nullptr;
	}
	else
	{
		if (parent_element->left == find_element_tree)
		{
			delete_branches(find_element_tree);
			parent_element->left = nullptr;
		}
		else
		{
			if (parent_element->right == find_element_tree)
			{
				delete_branches(find_element_tree);
				parent_element->right = nullptr;
			}
		}
	}
	tree = copy_tree(tree, tmp_tree);
	return tree;
}
int Count(BinareTree* tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return 1;
	int left, right;
	if (tree->left != NULL)
		left = Count(tree->left);
	else
		left = 0;
	if (tree->right != NULL)
		right = Count(tree->right);
	else
		right = 0;

	return left + right + 1;
}
int main()
{
	system("chcp 1251");
	BinareTree* tree = nullptr;
	DataField data_field;
	string surname_find;
	int menu = 0;
	bool exit_menu = true;
	while (exit_menu)
	{
		cout << "1 - Enter data \n2 - Enter random tree\n3 - Show all tree\n4 - find element\n5 - delete element\n6 - counting elements in the tree" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Enter element thee: ";
			data_field.inpute();
			tree = add_note(data_field, tree);
			break;
		}
		case 2:
		{
			cout << "Random, element tree:  ";
			data_field.set_random();
			tree = add_note(data_field, tree);
			break;
		}
		case 3:
		{
			cout << "show all tree: " << endl;
			treeprint(tree);
			break;
		}
		case 4:
		{
			cout << "enter surname: ";
			cin >> surname_find;
			treeprint_byname(surname_find, find_the_knot_tree(surname_find, tree));
			break;
		}
		case 5:
		{
			int type = 0;
			cout << "Enter type to delete \n1 - Surname\n2 - Data\n3 - Street" << endl;
			cin >> type;
			if (type == 1)
			{
				cout << "enter surname: ";
				cin >> surname_find;
				tree = delete_element_tree2(surname_find, tree);
				break;
			}
			if (type == 2)
			{
				int dr = 0;
				cout << "enter data: ";
				cin >> dr;
				tree = delete_element_tree2_data(dr, tree);
				break;
			}
			if (type == 3)
			{
				string street;
				cout << "enter street: ";
				cin >> street;
				tree = delete_element_tree2_street(street, tree);
				break;
			}
			break;

		}
		case 6:
		{
			cout << " tree consist of ";
			int count = 0;
			count = Count(tree);
			cout << count << " elements" << endl;


		}
		case 0:
		{
			exit_menu = false;
			break;
		}
		default:
		{
			break;
		}
		}
	}
	delete_tree(tree);
	system("pause");
	return 0;
}
