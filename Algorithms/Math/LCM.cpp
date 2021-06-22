#include "GCD.cpp"
#include <numeric>

namespace {

	long lcm(long a, long b) {
		return std::abs((a / gcd(a, b)) * b);
	}

	long lcm_b(long a, long b) {
		return std::lcm(a, b);
	}

}