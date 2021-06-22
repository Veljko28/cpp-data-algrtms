#include <cmath>

namespace {

    // recursive algorithm

    bool isPrime_r(int n, int i = 2) {
        if (n <= 2) return n == 2;
        
        if (n % i == 0) return false;

        if (i * i > n) return true;

        return isPrime_r(n, i + 1);
    }
    
    // faster algorithm

    bool isPrime(int n) {
        if (n < 2) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        long limit = (long)std::sqrt(n);

        for (long i = 5; i <= limit; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
	}
}