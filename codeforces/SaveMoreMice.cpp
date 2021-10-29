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

void SaveMoreMice()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		read(n, k);
		vector<int> a(k);
		for (int& i : a) cin >> i;
		sort(a.begin(), a.end(), greater<int>());
		int c = 0;
		ull s = 0;
		while (c < k and s + n - a[c] < n) {
			s += (ull)(n - a[c++]);
		}
		cout << c << '\n';
	}
}





