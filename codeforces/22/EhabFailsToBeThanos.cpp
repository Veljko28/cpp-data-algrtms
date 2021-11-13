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

void EhabFailsToBeThanos()
{
	sync;
	int n;
	cin >> n;
	vector<int> a(n * 2);
	set<int> s;
	for (int i = 0; i < n * 2; i++) {
		int b;
		cin >> b;
		s.insert(b);
		a[i] = b;
	}
	if (s.size() == 1) {
		cout << -1 << '\n';
	}
	else {
		sort(a.begin(), a.end());
		for (int j = 0; j < n * 2; j++) {
			if (j + 1 == n * 2) cout << a[j] << '\n';
			else cout << a[j] << ' ';
		}
	}
}





