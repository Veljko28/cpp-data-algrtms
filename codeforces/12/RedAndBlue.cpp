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

void solve17() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	int m;
	cin >> m;
	vector<int> b(m);
	for (int& j : b) cin >> j;
	partial_sum(a.begin(), a.end(), a.begin());
	partial_sum(b.begin(), b.end(), b.begin());
	cout << max(0, *max_element(a.begin(), a.end())) + max(0, *max_element(b.begin(), b.end())) << '\n';
}


void RedAndBlue()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve17();
	}
}

