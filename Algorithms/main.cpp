#include <thread>
#include <vector>
#include <iostream>


int main() {
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
	return 0;
}