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

void ATideOfRiverscape() {
	sync;
	int n, p;
	string s;
	cin >> n >> p >> s;
	string t = s;
	for (char& c : t) {
		if (c == '.') c = '0';
	}
	bool ok = true;
	for (int i = p; i < n; i++) {
		if (t[i] != t[i - p]) {
			ok = false;
		}
	}
	if (!ok) {
		outn(t);
		return;
	}
	int i = 0;
	while (i < n and s[i] != '.') i++;
	if (i + p < n) {
		t[i] = '1';
		outn(t);
		return;
	}
	i = n - 1;
	while (i >= 0 and s[i] != '.') i--;
	if (i - p >= 0) {
		t[i] = '1';
		outn(t);
		return;
	}
	no;
}
