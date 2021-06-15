#include "Dijkstra.cpp"


int main() {
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
	return 0;
}