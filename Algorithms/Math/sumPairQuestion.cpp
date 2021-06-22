#include <iostream>
#include <vector>
#include <algorithm>


// find the sum by adding two elements of the vector

bool badSolution(std::vector<int> v, int sum) {
	for (auto it = v.begin(); it != v.end(); it++) {
		for (auto it_2 = it + 1; it_2 != v.end(); it_2++) {
			if (*it + *it_2 == sum) {
				return true;
			}
		}
	}
	return false;
}


bool BetterSolution(std::vector<int> v, int sum) {
	std::sort(v.begin(), v.end());

	for (int i : v) {
		// finds the number that needs to be added to i to get the sum ( sum - i == j / j + i == sum )
		auto b = std::binary_search(v.begin(), v.end(), sum - i);
		if (b) {
			return true;
		}
	}
	return false;
}

bool BetterSolution2(std::vector<int> v, int sum) {
	std::sort(v.begin(), v.end());

	int left = 0;
	int right = v.size() - 1;
	while (left < right)
	{
		int temp = left + right;
		if (temp == sum) {
			return true;
		}
		else if (temp < sum) left++;
		else right--;
	}
	return false;
}