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

void MahmudAndTriangle()
{
	sync;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (i + 1 == n or i + 2 == n) break;
		if (a[i] + a[i + 1] > a[i + 2]) {
			cout << "YES" << '\n';
			return;
		}
	}
	cout << "NO" << '\n';
}


