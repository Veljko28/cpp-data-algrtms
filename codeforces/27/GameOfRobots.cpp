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
#include <unordered_map>
#include <deque>
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
using namespace std;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void GameOfRobots() {
	sync;
	int n;
	ll k;
	read(n, k);
	vector<ll> a(n + 1);
	vector<int> p(n + 1);
	for (int i = 1; i <= n; i++) cin >> a[i];

	p[1] = 1;
	for (int i = 2; i <= n; i++) {
		p[i] = p[i - 1] + i;

	}

	int x, ind;
	for (int i = 1; i <= n; i++) {
		if (p[i] > k) {
			x = p[i - 1];
			break;

		}
		else
			if (p[i] == k) {
				x = p[i];
				ind = i;
				break;

			}
	}
	if (k == x) cout << a[ind] << '\n';

	else cout << a[k - x] << '\n';
}