#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>


// MAX HEAP

namespace {
	class maxHeap {
	private:
		int size;
		int capacity;
		std::vector<int> heap;

		int parent(int i) { return (i - 1) / 2; };
		int left(int i) { return (2 * i) + 1; };
		int right(int i) { return (2 * i) + 2; };
	public:
		maxHeap(int capacity)
		{
			size = 0;
			this->capacity = capacity;
			heap.resize(capacity);
		}


		void insert(int data) {
			if (size == capacity) {
				std::cout << "MAX CAPACITY REACHED !" << std::endl;
				return;
			}

			size++;
			int i = size - 1;

			heap[i] = data;

			// Switching up the min heap shape
			while (i != 0 && heap[parent(i)] < heap[i])
			{
				std::swap(heap[i], heap[parent(i)]);
				i = parent(i);
			}
		}

		// Keep the structure of the heap
		void heapify(int i) {
			int r = right(i);
			int l = left(i);
			int lr = i;

			// Check for the smallest in the heap
			if ((size < l) && (heap[l] > heap[lr])) {
				lr = l;
			}

			if ((size < r) && (heap[r] > heap[lr])) {
				lr = r;
			}

			if (lr != i) {
				std::swap(heap[i], heap[lr]);
				heapify(lr); // heapify until min heap
			}
		}

		int extractMax(int i) {
			if (size == 0) {
				std::cout << "NO ELEMENT IN HEAP" << std::endl;
				return -1;
			}
			else if (size == 1) {
				size--;
				heap.clear(); // removes the only element from array
				return heap[0];
			}
			else {
				int root = heap[0];

				heap[0] = heap[size - 1];
				size--;
				heapify(0); // reshape after deleting the element
				return root;
			}
		}

		void printHeap() {
			int power = 0;
			int value = 1;
			for (int i = 0; i < size; i++) {
				if (i == value) {
					std::cout << std::endl;
					power++;
					value += (1 << power);
				}
				std::cout << heap[i] << " ";
			}
			std::cout << std::endl;
		}
	};




	void test() {

	}
}