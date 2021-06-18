#include <iostream>
#include <list>
#include <set>
#include <utility>
#include <vector>

using namespace std; // for better readability


//  Breadth First Search (BFS)

class Graph {
private:
	int V; // Verticies ( Vertikale )
	list<int>* adj; // Adjacent list ( Lista susednih elemenata )

public:
	Graph(int v) {
		this->V = v;
		this->adj = new list<int>[v];
	}

	void addEdge(int v,int w) {
		adj[v].push_back(w);
	}

	void BFS(int s) {
		bool* visited = new bool[V]; // list of visited nodes
		for (int i = 0; i < V; i++) {
			visited[i] = false; // init to false
		}

		list<int> queue; // make a queue for checking nodes
		visited[s] = true;
		queue.push_back(s);

		while (!queue.empty())
		{
			s = queue.front();
			queue.pop_front();

			cout << "Checking vertexes of " << s << endl;
			for (auto i = adj[s].begin(); i != adj[s].end(); i++) { // check all the verticies of the current node
				if (!visited[*i]) {
					cout << "visit " << *i << endl;
					visited[*i] = true;
					queue.push_back(*i);
				}
			}
		}

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

	q.BFS(2);
}