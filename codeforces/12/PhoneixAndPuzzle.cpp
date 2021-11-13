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
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void solve19() {
	int n;
	cin >> n;
	auto m = [](int n) -> int {
		int a = sqrt(n);
		return a * a == n;
	};
	if (n % 2 == 0 and m(n / 2)) {
		cout << "YES" << '\n';
	}
	else if (n % 4 == 0 and m(n / 4)) cout << "YES" << '\n';
	else cout << "NO" << '\n';
}

void PhoneixAndPuzzle()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve19();
	}
}


