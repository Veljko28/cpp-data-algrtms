#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <climits>
#include <queue>
#include <cmath>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define all(a) (a).begin(), (a).end()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ff first
#define ss second
#define prv(a) for (int i =0;i<a.size();i++) { if (i+1==a.size()){ cout << a[i] << '\n'; } cout << a[i] << ' '; }

using namespace std;


//int solve(vector<pii> a, int i, bool ok) {
//	if (i == a.size() - 1) return 0;
//	if (dp[{i, ok}]) return dp[{i, ok}];
//	int ans = 0;
//	if (ok) {
//		ans += abs(a[i].ff - a[i + 1].ff);
//	}
//	else {
//		ans += abs(a[i].ss - a[i + 1].ss);
//	}
//	int ans2 = ans;
//	ans += (dp[{i+1,0}] = solve(a, i + 1, 0));
//	ans2 += (dp[{i + 1, 1}] = solve(a, i + 1, 1));
//	return min(ans, ans2);
//}



void SimpleGame() {
	sync;
	int n, m;
	cin >> n >> m;
	if (n == 1 and m == 1) {
		cout << 1;
		return 0;
	}
	if (m > n / 2.0) {
		cout << m-1 << '\n';
	}
	else {
		cout << m+1 << '\n';
	}
}