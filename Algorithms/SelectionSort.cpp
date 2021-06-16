#include <vector>
#include <iostream>

namespace {
	void SelectionSort(std::vector<int> v) {
		for (int i = 0; i < v.size()-1; i++) {
			int small = i;
			for (int j = i + 1; j < v.size(); j++) {
				if (v[j] < v[small]) small = j;
			}
			std::swap(v[i], v[small]);
		}
	}

	void test() {
		std::vector<int> v = { 5,6,2,4,1,3 };
		for (int i : v) {
			std::cout << i << " ";
		}
		std::cout << std::endl;
		SelectionSort(v);
		for (int i : v) {
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
}