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

void Dragons()
{
	sync;
	int s, n;
	read(s, n);
	multimap<int, int> m;
	for (int i = 0; i < n; i++) {
		int k, v;
		read(k, v);
		m.insert(make_pair(k, v));
	}
	for (auto i = m.begin(); i != m.end(); i++) {
		if (s > i->first) {
			s += i->second;
		}
		else {
			cout << "NO" << '\n';
			return;
		}
	}
	cout << "YES" << '\n';
}
