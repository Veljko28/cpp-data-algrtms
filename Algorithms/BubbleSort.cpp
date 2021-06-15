#include <vector>


void BubbleSort(std::vector<int>& v) {
	for (int i = 0; i < v.size()-1; i++) {
		for (int j = 0; j < v.size()-i-1; j++) {
			if (v[j] > v[j + 1]) {
				std::swap(v[j], v[j + 1]);
			}
		}
	}
}