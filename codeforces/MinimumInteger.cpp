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


void MinimumInteger()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int l, r, d;
		read(l, r, d);
		if (d < l or d > r) {
			cout << d << '\n';
		}
		else cout << ((r / d) * d + d) << '\n';
	}
}





