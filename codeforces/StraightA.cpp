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


bool pass1(vector<int> a, int k) {
	double b = (double)accumulate(a.begin(), a.end(), 0) / (double)a.size();
	return b >= ((double)k - 1.0) + 0.5;
}

void StraightA()
{
	sync;
	int n, k, ans = 0;
	read(n, k);
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}
	while (true) {
		if (pass1(a, k)) break;
		else {
			ans++;
			a.push_back(k);
		}
	}
	cout << ans << '\n';
}
