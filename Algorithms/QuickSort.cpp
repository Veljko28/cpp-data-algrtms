#include <iostream>
#include <vector>
#include "helper.h"

// Use the built in std::qsort() for quick sort ( this is just for practise and understanding )

namespace {

	int Partition(std::vector<int> v, int start, int end) {
		int pivot = v[end]; // set the pivot to the last element
		int idx = start;
		for (int i = start; i < end; i++) {
			if (v[i] < pivot) {
				std::swap(v[i], v[idx++]); // swap if the current value at i is lower than the pivot
			}
		}
		std::swap(v[idx], v[end]); // swap the last idx used and the pivot ( which is at the end )
		return idx;
	}

	// Used for arrays insted of vectors
	int Partition_Array(int a[], int start, int end) {
		int pivot = a[end];
		int idx = start;
		for (int i = start; i < end; i++) {
			if (a[i] < pivot) {
				std::swap(a[i], a[idx++]); 
			}
		}
		std::swap(a[idx], a[end]); 
		return idx;
	}


	void QuickSort(std::vector<int> v, int start, int end) {
		if (start < end) {
			int idx = Partition(v, start, end);
			QuickSort(v, start, idx - 1); // sort all from the current to the end
			QuickSort(v, idx + 1, end); // sort all from the current to the beggining
		}
	}


	// Used for arrays insted of vectors
	void QuickSort_Array(int a[], int start, int end) {
		if (start < end) {
			int idx = Partition_Array(a, start, end);
			QuickSort_Array(a, start, idx - 1);
			QuickSort_Array(a, idx + 1, end);
		}
	}

	// testing the quick sort
	void test() {
		std::vector<int> v = { 6 ,7, 2, 4, 1, 3, 5 };
		//printVector(v); // Before sorting
		QuickSort(v, 0, v.size()-1);
		//printVector(v); // After sorting
	}
}