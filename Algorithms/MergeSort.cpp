#include <iostream>
#include <vector>
#include "helper.h"

namespace {

	// Time Complexity of O(nlogn) - worst case

	void Merge(std::vector<int> left, std::vector<int> right, std::vector<int> v) { // merges the left and right array into v in sorted order
		int i = 0, j = 0, k = 0;
		while (i < left.size() && j < right.size())
		{
			if (left[i] < right[j]) { // put left value if its smaller for sorted array
				v[k] = left[i++];
			}
			else { // else put the right one
				v[k] = right[j++];
			}
			k++;
		}
		while (i < left.size()) { // if the right array had more smaller values and the left one has leftovers ( hahah LEFT-overs )
			v[k++] = left[i++];
		}
		while (j < right.size()) // same as the last one but for the right
		{
			v[k++] = right[j++];
		}
	}

	// Array version of the merge
	void Merge_Array(int left[], int right[], int a[], int n) {
		int sizeL = (sizeof(left) / sizeof(left[0]));
		int sizeR = (sizeof(right) / sizeof(right[0]));
		int i = 0, j = 0, k = 0;
		while (i < sizeL && j << sizeR)
		{
			if (left[i] < right[j]) {
				a[k] = left[i++];
			}
			else {
				a[k] = right[j++];
			}
			k++;
		}
		while (i < sizeL) {
			a[k++] = left[i++];
		}
		while (j < sizeR)
		{
			a[k++] = right[j++];
		}
	}

	void MergeSort(std::vector<int> v) {
		if (v.size() < 2) { // if the array has 1 element break
			return;
		}

		int n = v.size();
		int mid = n / 2;
		std::vector<int> left(mid);
		std::vector<int> right(n-mid);
		for (int i = 0; i < mid; i++) { // devide into left
			left.push_back(v[i]);
		}
		for (int j = mid; j < n - 1; j++) { // devide into right
			right.push_back(v[j]);
		}
		MergeSort(left); // sort the left one by deviding it into left and right
		MergeSort(right); // same as the above but for the right one
		Merge(left, right, v);
	}

	// Array version of the sort
	void MergeSort_Array(int a[], int n) {
		if (n < 2) {
			return;
		}

		int mid = n / 2;
		int* left = (int*)malloc(sizeof(int) * mid);
		int* right = (int*)malloc(sizeof(int) * (n-mid));
		for (int i = 0; i < mid; i++) {
			left[i] = a[i];
		}
		for (int j = mid; j < n - 1; j++) {
			right[j - mid] = a[j];
		}
		MergeSort_Array(left, mid);
		MergeSort_Array(right, n-mid);
		Merge_Array(left, right, a, n);
	}

	void test() {
		std::vector<int> v = { 4, 2, 5, 1, 6, 3 };
		//printVector(v);

		MergeSort(v);
		//printVector(v);
	}
}