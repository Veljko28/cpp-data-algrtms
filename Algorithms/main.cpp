#include <thread>
#include <vector>
#include <iostream>
#include <set>
#include <list>
#include "Dijkstra.cpp"

//#define INF 10000000
//
//void Dijkstra(int s) {
//	int V;
//	std::list<std::pair<int, int >>* adj;
//	std::set<std::pair<int, int >> extract_set;
//	std::vector<int> distances(V, INF);
//
//	extract_set.insert(std::make_pair(0, s));
//	distances[s] = 0;
//
//	while (!extract_set.empty())
//	{
//		std::pair<int, int > temp = *(extract_set.begin());
//
//		extract_set.erase(extract_set.begin());
//
//		int u = temp.second;
//
//		for (auto i = adj[u].begin(); i != adj[u].end(); i++) {
//			int v = (*i).first;
//			int weight = (*i).second;
//			if (distances[u] > distances[v] + weight) {
//				if (distances[u] != INF) {
//					extract_set.erase(extract_set.find(std::make_pair(distances[v],v)));
//				}
//				distances[v] = distances[u] + weight;
//				extract_set.insert(std::make_pair(distances[v], v));
//			}
//		}
//	}
//}


int main() {
	dijkstra_test();
	return 0;
}