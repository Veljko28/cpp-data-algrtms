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


void SecondPriceAuction()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, max = 0, idx = 0;
	cin >> n;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			idx = i;
		}
	}
	a.erase(a.begin() + idx);

	cout << idx + 1 << " " << *(max_element(a.begin(), a.end())) << '\n';
}



