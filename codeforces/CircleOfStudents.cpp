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
constexpr auto N = 200000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void shift1(vector<int>& a) {
	int t = a[0];
	for (int i = 0; i < a.size() - 1; i++) {
		a[i] = a[i + 1];
	}
	a[a.size() - 1] = t;
}

void solve25() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	vector<int> t1 = v;
	sort(t1.begin(), t1.end());
	vector<int> t2 = v;
	sort(t2.begin(), t2.end(), greater<int>());
	if (n == 1 or v == t1 or v == t2) {
		cout << "YES" << '\n';
		return;
	}
	shift1(v);
	int a = 1;
	while (a != v.size()) {
		if (v == t1 or v == t2) {
			cout << "YES" << '\n';
			return;
		}
		shift1(v);
		a++;
	}
	cout << "NO" << '\n';
}

void CircleOfStudents()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve25();
	}
}




