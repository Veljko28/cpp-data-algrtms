#include <iostream>
#include <list>
#include <set>
#include <utility>
#include <vector>

#define INF 1000000

using namespace std; // for better readability

// Djikstra's algorithm is used to find the shortest path from one point to another

// Djikstra algoritam se koristi kada je potrebno prnaci najkraci put do nekog drugog podatka ( node-a )

class Graph {
private:
	int V; // Verticies ( Vertikale )
	list<pair<int, int>> *adj; // Adjacent list ( Lista susednih elemenata )

public:
	Graph(int v);

	void addEdge(int v1, int v2, int weight) {
		adj[v1].push_back(make_pair(v2, weight));
	}
	
	// Djikstra's algorithm 
	void findPath(int s) {
		set<pair<int, int>> extract_set;
		vector<int> distances(V, INF);

		extract_set.insert(make_pair(0, s));
		distances[s] = 0;

		while (!extract_set.empty())
		{
			pair<int, int> temp = *(extract_set.begin()); // get the pair value of the first one 

			extract_set.erase(extract_set.begin()); // delete the first one

			int u = temp.second;

			for (auto i = adj[u].begin(); i != adj[u].end(); i++) {
				int v = (*i).first;
				int weight = (*i).second;

				if (distances[v] > distances[u] + weight) {
					if (distances[v] != INF) {
						// remove current distance if set
						extract_set.erase(extract_set.find(make_pair(distances[v], v)));
					}
					distances[v] = distances[u] + weight;
					extract_set.insert(make_pair(distances[v], v));
				}

			}
		}

		cout << "Minimum distace from vertex" << s << " is: " << endl;
		for (int i = 0; i < V; i++) {
			cout << "Vertex: " << i << "\tDistance: " << distances[i] << endl;
		}
	}
};


// Constructor with init verticies
Graph::Graph(int v) {
	this->V = v;
	this->adj = new list<pair<int, int>>[v];
}