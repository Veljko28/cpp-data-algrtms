#include <iostream>
#include <vector>

using namespace std;

// just use std::binary_search, this is just for practise

bool BinarySearch(std::vector<int> v, int value) {

	int low = 0;
	int high = v.size() - 1;

	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (value == v[mid]) return true;
		else if (value > v[mid]) low = mid + 1;
		else high = mid - 1;
	}

	return false;
}


bool BinarySearch_Array(int a[], int size, int value) {
	int low = 0;
	int high = size - 1;

	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (value == a[mid]) return true;
		else if (value > a[mid]) low = mid + 1;
		else high = mid - 1;
	}

	return false;
}