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

void RoadsideTrees()
{
	sync;
	int n;
	cin >> n;
	int s = 0, c = 0;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	for (int i = 0; i < n; i++) {
		while (c != a[i]) { // go to top
			c++; s++;
		}
		s++; // eat
		if (i + 1 != n) {
			int h = min(a[i], a[i + 1]);
			while (c != h) { // go to common height
				c--;
				s++;
			}
			s++; // jump
		}

	}
	cout << s << '\n';
}





