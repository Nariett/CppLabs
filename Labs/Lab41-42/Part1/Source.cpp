#include <iostream>
#include <vector>

using namespace std;


class Graph {
private:
	int count;
	int** matrix;
public:
	Graph(int a, int** matrix);
	Graph(int a);
	int get(int out, int in);
	void set(int out, int in, int weight);
	void print();
	void floid();
};
Graph::Graph(int a) {
	this->count = a;
	this->matrix = new int* [this->count];
	for (int i = 0; i < this->count; i++) {
		this->matrix[i] = new int[this->count];
		for (int j = 0; j < this->count; j++) {
			this->matrix[i][j] = 0;
		}
	}
}

Graph::Graph(int a, int** matrix) : Graph(a) {
	for (int i = 0; i < this->count; i++) {
		for (int j = 0; j < this->count; j++) {
			this->matrix[i][j] = matrix[i][j];
		}
	}
}

void Graph::print() {
	cout << "[-]\t";
	for (int i = 0; i < this->count; i++) {
		cout << "[" << i << "]\t";
	}
	cout << "\n";
	for (int i = 0; i < this->count; i++) {
		cout << "[" << i << "]\t";
		for (int j = 0; j < this->count; j++) {
			cout << this->matrix[i][j] << "\t";
		}
		cout << "\n";
	}
}

int Graph::get(int out, int in) {
	return this->matrix[out][in];
}

void Graph::set(int out, int in, int weight) {
	this->matrix[out][in] = weight;
}

void Graph::floid() {
	int max = 0;
	for (int i = 0; i < this->count; i++) {
		for (int j = 0; j < this->count; j++) {
			max += this->matrix[i][j];
		}
	}
	for (int i = 0; i < this->count; i++) {
		for (int j = 0; j < this->count; j++) {
			if (this->matrix[i][j] == 0 && i != j) {
				this->matrix[i][j] = max;
			}
		}
	}
	for (int k = 0; k < this->count; k++) {
		for (int i = 0; i < this->count; i++) {
			for (int j = 0; j < this->count; j++) {
				if (this->matrix[i][k] + this->matrix[k][j] < this->matrix[i][j]) {
					this->matrix[i][j] = this->matrix[i][k] + this->matrix[k][j];
				}
			}
		}
	}
}


int main()
{
	int p = 0;
	Graph graph(9);
	graph.set(0, 6, 10);
	graph.set(0, 8, 2);
	graph.set(1, 5, 6);
	graph.set(1, 7, 10);
	graph.set(1, 8, 7);
	graph.set(2, 5, 10);
	graph.set(2, 4, 10);
	graph.set(3, 0, 15);
	graph.set(3, 7, 1);
	graph.set(4, 2, 10);
	graph.set(5, 2, 10);
	graph.set(5, 7, 7);
	graph.set(6, 0, 10);
	graph.set(6, 1, 8);
	graph.set(6, 4, 3);
	graph.set(7, 1, 10);
	graph.set(7, 5, 7);
	graph.set(7, 3, 1);
	graph.print();;
	graph.floid();
	graph.print();
	return 0;
}