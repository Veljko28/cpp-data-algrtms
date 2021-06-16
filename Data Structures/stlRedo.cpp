#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <set>

namespace {

	int stlRedo() {

		std::vector<int> a = { 81, 6 , 6, 33, 15 , 6 };

		bool present = std::binary_search(a.begin(), a.end(), 6);

		present = std::binary_search(a.begin(), a.end(), 2); // false

		std::cout << present << std::endl;

		a.push_back(10);
		std::sort(a.begin(), a.end());

		for (int i : a)
		{
			std::cout << i << std::endl;
		}

		std::vector<int>::iterator it = std::lower_bound(a.begin(), a.end(), 6);

		std::vector<int>::iterator it2 = std::upper_bound(a.begin(), a.end(), 6);

		std::cout << *it <<  " " << *it2 << std::endl;

		std::cout << it2 - it << std::endl;
	
		std::cout << std::count(a.begin(), a.end(), 6) << std::endl;


		std::sort(a.begin(), a.end(), std::greater<int>());

		for (int i : a)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;

		std::set<int> s(a.begin(), a.end());

		for (int i : s) {
			std::cout << i << " ";
		}

		// auto its = s.lower_bound(INT_MIN);
		// std::cout << std::endl << *its;

		return 0;
	}
}