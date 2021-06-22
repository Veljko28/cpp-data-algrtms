#include <numeric>


namespace {
	// use std::__gcd(int a, int b) or std::gcd(int a, int b) for C++ 17 - in real practise

	long gcd(long a, long b) {
		long c = a + b;
		while (c-- > 0) {
			if (c % a == 0 and c % b == 0) return c;
		}
		return -1;
	}


	// recursive
	long gcd_r(long a, long b) {
		return b == 0 ? (a < 0 ? -a : a) : gcd(a % b, b);
	}

	// built in function
	long gcd_b(long a, long b) {
		return std::gcd(a, b);
	}
}