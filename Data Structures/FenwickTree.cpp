#include <iostream>
#include <vector>
#include <string>


namespace {
	class FenwickTree
	{
	private:
		std::vector<long> tree;

		// Least significant bit - returns the value of the smallest bit of number i
		int lsb(int i) {
			return i & -i;
		}

		long prefixSum(int i) {
			long sum = 0L;
			while (i != 0)
			{
				sum += tree[i];
				i &= ~lsb(i); // i -= lsb(i) but faster - deletes the smallest bit from i
			}
		}

		long sum(int i, int j) {
			if (j < i) throw "j must be >= i";

			return prefixSum(j) - prefixSum(i - 1);
		}

		void add(int i, long k) {
			while (i < tree.size())
			{
				tree[i] += k;
				i += lsb(i);
			}
		}
	public:
		FenwickTree(int sz);

		FenwickTree(std::vector<long> values);

	};

	FenwickTree::FenwickTree(int sz)
	{
		tree = std::vector<long>(sz);
	}


	FenwickTree::FenwickTree(std::vector<long> values) {
		if (values.empty()) throw "The vector has no values";

		tree = values;

		for (int i = 1; i < tree.size(); i++) {
			int j = i + lsb(i);
			if (j < tree.size()) tree[j] += tree[i];
		}
	}
}

