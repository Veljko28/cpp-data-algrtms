#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>;
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


bool isFair1(ull n) {
	string s = to_string(n);
	for (char c : s) {
		int a = c - '0';
		if (a != 0 && n % a != 0) {
			return false;
		}
	}
	return true;
}

void FairNumbers()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		ull n;
		cin >> n;
		while (true) {
			if (isFair1(n)) break;
			n++;
		}
		cout << n << '\n';
	}
}





