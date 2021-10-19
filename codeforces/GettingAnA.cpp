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
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

bool ok1(vector<int> a) {
	int b = accumulate(a.begin(), a.end(), 0);
	double ans = (double)b / (double)a.size();
	return ans >= 4.5;
}

void GettingAnA()
{
	sync;
	int n, ans = 0;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}
	while (true) {
		if (ok1(a)) break;
		else {
			auto it = min_element(a.begin(), a.end());
			a.erase(it);
			a.push_back(5);
			ans++;
		}
	}

	cout << ans << '\n';
}



