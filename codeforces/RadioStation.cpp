#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void RadioStatio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	read(n, m);
	vector<string> a(n * 2), b(m * 2), c;
	for (string& s : a) cin >> s;
	for (string& ss : b) cin >> ss;
	for (int i = 1; i < m * 2; i += 2) {
		string ip = b[i].substr(0, b[i].length() - 1);
		string name;
		for (int j = 1; j < n * 2; j += 2) {
			if (a[j] == ip) {
				name = a[j - 1];
				break;
			}
		}
		c.push_back(b[i - 1] + " " + b[i] + " #" + name);
	}

	for (string s : c) cout << s << '\n';
}


