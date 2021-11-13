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

void Lecture()
{
	sync;
	int n, m;
	read(n, m);
	map<string, string> a;
	for (int i = 0; i < m; i++) {
		string b, c;
		read(b, c);
		a.insert(make_pair(b, c));
	}
	vector<string> v(n), ans;
	for (string& s : v) cin >> s;
	for (int j = 0; j < n; j++) {
		if (a[v[j]].length() < v[j].length()) {
			ans.push_back(a[v[j]]);
		}
		else ans.push_back(v[j]);
	}
	for (int k = 0; k < ans.size(); k++) {
		if (k == ans.size() - 1) {
			cout << ans[k] << '\n';
		}
		else cout << ans[k] << ' ';
	}
}
