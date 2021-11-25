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
#define minus pf("-1\n")
#define imp pf("Impossible\n")
#define vi vector<int>
#define vll vector<ll>
#define si set<int>
#define sc set<char>
#define pii pair<int,int>
#define pci pair<char,int>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n-1;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define vllfor(v) for (ll& i : v) cin >> i;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define outn(a) cout << a << '\n'
#define out(a) cout << a << " "
#define fi first
#define se second
using namespace std;

template<typename T>
void prv(vector<T> a) {
	for (int i = 0; i < a.size(); i++) {
		if (i + 1 == a.size()) cout << a[i] << '\n';
		else cout << a[i] << ' ';
	}
}

template<typename T, typename N>
void prvp(vector<pair<T, N>> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i].first << " " << a[i].second << '\n';
	}
}

//template<typename... T>
//void read(T& ...args) {
//	((cin >> args), ...);
//}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}


void StrangeList() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		ll n, x, ans = 0;
		cin >> n >> x;
		vll a(n), b(n);
		for (ll i = 0; i < n; i++) {
			ll c;
			cin >> c;
			a[i] = c;
			int cnt = 1;
			while (c % x == 0) {
				c /= x;
				cnt++;
			}
			b[i] = cnt;
		}
		ll idx = 0, m = INT_MAX;
		for (int i = 0; i < n; i++) {
			if (m > b[i]) {
				m = b[i];
				idx = i;
			}
		}
		for (ll j = idx; j < n; j++) {
			ans += m * a[j];
		}
		for (ll k = idx - 1; k >= 0; k--) {
			ans += (m + 1) * a[k];
		}
		outn(ans);
	}
}


