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


void BearAndRasberry()
{
	sync;
	int n, c, b, ans = 0;
	read(n, c);
	vector<int> x(n);
	for (int& i : x) cin >> i;
	for (int i = 1; i < n; i++) {
		ans = max(x[i - 1] - x[i] - c, ans);
	}
	cout << ans << '\n';
}





