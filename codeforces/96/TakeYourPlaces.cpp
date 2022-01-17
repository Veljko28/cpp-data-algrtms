#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>
#include <cstring>
#include <ctime>
#include <set>
#include <list>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <deque>
#include <chrono>
#include <fstream>
#include <sstream>
#include <ostream>
#include <assert.h>
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define minus pf("-1\n")
#define imp pf("impossible\n")
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vll vector<ll>
#define si set<int>
#define sc set<char>
#define pii pair<int,int>
#define pdd pair<double,double>
#define pci pair<char,int>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n-1;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define vbfor(v) for (bool& i : v) cin >> i;
#define ovifor(v, n) for (int i =1;i<=n;i++) cin >> v[i]; 
#define vllfor(v) for (ll& i : v) cin >> i;
#define vsfor(v) for (string& s : v) cin >> s;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define outn(a) cout << a << '\n'
#define out(a) cout << a << " "
#define fi first
#define se second
#define nmg pf("nemoguce\n");
#define mg pf("moguce\n");
#define msi multiset<int> 
#define mss multiset<string>
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

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return (a * b) / gcd(a, b);
}

ifstream read(string s) {
	ifstream file;
	file.open(s);
	if (file.fail()) {
		outn("Failed to Open Input File !");
		exit(1);
	}
	return file;
}

ofstream write(string s) {
	ofstream file;
	file.open(s);
	if (file.fail()) {
		outn("Failed to Open Output File !");
		exit(1);
	}
	return file;
}

bool customSort(pii a, pii b) {
	if (a.fi == b.fi) {
		return a.se < b.se;
	}
	return a.fi < b.fi;
}

vector<bool> Eratothenes(ll n) {
	vector<bool> primes(n + 1, true);
	primes[0] = primes[1] = false;
	for (ll i = 2; i * i <= n; i++) {
		if (primes[i]) {
			for (ll j = i * i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	return primes;
}

bool check(ll x) {
	double a = sqrt(x);
	return a == (int)a;
}

void checkColumn(vector<vi>& a, int i, int j) {
	for (i; i < a.size(); i++) {
		a[i][j] = 0;
	}
}

void checkRow(vector<vi>& a, int i, int j) {
	for (j; j < a[i].size(); j++) {
		a[i][j] = 0;
	}
}

bool reverseable(string x) {
	for (char c : x) {
		if (c != '0' and c != '1' and c != '2' and c != '5' and c != '8') return false;
	}
	return true;
}

int test(vector<bool> a, bool ok) {
	int n = a.size();
	int ans1 = 0;
	int o = 1, e = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] != ok) {
			if (ok) {
				o = max(o, i);
				while (o < n and a[o] == 0) o++;
				if (o == n) {
					ans1 = INT_MAX;
					break;
				}

				ans1 += o - i;
				a[i] = 1;
				if (o != i) a[o] = 0;
				o++;
			}
			else {
				e = max(e, i);
				while (e < n and a[e] == 1) e++;
				if (e == n) {
					ans1 = INT_MAX;
					break;
				}

				ans1 += e - i;
				a[i] = 1;
				if (e != i) a[e] = 1;
				e++;
			}
		}
		ok = !ok;
	}
	return ans1;
}

void TakeYourPlaces() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<bool> a(n);
		int b = 0, c = 0;
		for (int i = 0, j; i < n; i++) {
			cin >> j;
			if (j % 2) {
				c++;
				a[i] = 1;
			}
			else {
				b++; a[i] = 0;
			}
		}
		if (abs(b - c) > 1) {
			cout << -1 << '\n';
			continue;
		}
		int d = test(a, false), f = test(a, true);
		if (d == INT_MAX and f == INT_MAX) {
			cout << -1 << '\n';
		}
		else cout << min(d, f) << '\n';
	}
}