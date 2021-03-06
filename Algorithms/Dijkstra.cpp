#include <iostream>
#include <list>
#include <set>
#include <utility>
#include <vector>

#define INF 10000000

using namespace std; // for better readability

// Djikstra's algorithm is used to find the shortest path from one point to another

// Djikstra algoritam se koristi kada je potrebno prnaci najkraci put do nekog drugog podatka ( node-a )

namespace {

	class Graph {
	private:
		int V; // Verticies ( Vertikale )
		list<pair<int, int>> *adj; // Adjacent list ( Lista susednih elemenata )

	public:
		Graph(int v) {
			this->V = v;
			this->adj = new list<pair<int, int>>[v];
		}

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

			cout << "Minimum distace from vertex " <<  s  << " is: " << endl;
			for (int i = 0; i < V; i++) {
				cout << "Vertex: " << i << "\tDistance: " << distances[i] << endl;
			}
		}
	};

	void dijkstra_test() {
		Graph q(9);

		// NODE 0
		q.addEdge(0, 1, 4);
		q.addEdge(0, 7, 8);

		// NODE 1
		q.addEdge(1, 0, 4);
		q.addEdge(1, 2, 8);
		q.addEdge(1, 7, 11);

		// NODE 2
		q.addEdge(2, 1, 8);
		q.addEdge(2, 8, 2);
		q.addEdge(2, 5, 4);
		q.addEdge(2, 3, 7);

		// NODE 3
		q.addEdge(3, 2, 7);
		q.addEdge(3, 5, 14);
		q.addEdge(3, 4, 9);

		// NODE 4
		q.addEdge(4, 3, 9);
		q.addEdge(4, 5, 10);

		// NODE 5
		q.addEdge(5, 6, 2);
		q.addEdge(5, 2, 4);
		q.addEdge(5, 3, 14);
		q.addEdge(5, 4, 10);

		// NODE 6
		q.addEdge(6, 7, 1);
		q.addEdge(6, 8, 6);
		q.addEdge(6, 5, 2);

		// NODE 7
		q.addEdge(7, 0, 8);
		q.addEdge(7, 1, 11);
		q.addEdge(7, 8, 7);
		q.addEdge(7, 6, 1);

		// NODE 8
		q.addEdge(8, 2, 2);
		q.addEdge(8, 7, 7);
		q.addEdge(8, 6, 6);

		q.findPath(0);
	}
}
