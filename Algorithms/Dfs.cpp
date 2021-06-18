#include <iostream>
#include <list>
#include <set>
#include <utility>
#include <vector>

using namespace std; // for better readability


//  Depth First Search (DFS)

class Graph {
private:
	int V; // Verticies ( Vertikale )
	list<int>* adj; // Adjacent list ( Lista susednih elemenata )

	// Recursive helper function
	void DFS_Hepler(int s, bool* visited)
	{
		cout << "Visiting node " << s << endl;
		visited[s] = true;

		for (auto i = adj[s].begin(); i != adj[s].end(); i++) {
			if (!visited[*i])
			{
				cout << "Moving from node " << s << " to node " << *i << endl;
				DFS_Hepler(*i, visited);
			}
		}
	}

public:
	Graph(int v) {
		this->V = v;
		this->adj = new list<int>[v];
	}

	void addEdge(int v, int w) {
		adj[v].push_back(w);
	}

	void DFS(int s) {
		bool* visited = new bool[V]; // list of visited nodes
		for (int i = 0; i < V; i++) {
			visited[i] = false; // init to false
		}

		DFS_Hepler(s, visited);
	}

};

void test() {
	Graph q(6);

	// NODE 0
	q.addEdge(0, 1);
	q.addEdge(0, 2);

	// NODE 1
	q.addEdge(1, 0);
	q.addEdge(1, 3);
	q.addEdge(1, 4);

	// NODE 2
	q.addEdge(2, 0);
	q.addEdge(2, 4);

	// NODE 3
	q.addEdge(3, 1);
	q.addEdge(3, 4);
	q.addEdge(3, 5);

	// NODE 4
	q.addEdge(4, 1);
	q.addEdge(4, 2);
	q.addEdge(4, 3);
	q.addEdge(4, 5);

	// NODE 5
	q.addEdge(5, 3);
	q.addEdge(5, 4);

	q.DFS(0);
}