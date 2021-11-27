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
#define imp pf("Impossible\n")
#define vi vector<int>
#define vs vector<string>
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
#define nmg pf("nemoguce\n");
#define mg pf("moguce\n");
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
		cout << a[i].first  << " " << a[i].second  << '\n';
	}
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
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


int main() {
	sync;
	int n;
	cin >> n;
	vector<pii> a(n);
	For(n) {
		int b, c;
		cin >> b >> c;
		a[i] = { b,c };
	}
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		pii b = a[i], c = a[i + 1];
		if (c.first - b.first == 0) {
			swap(b, c);
		}
		int m = (c.second - b.second) / (c.first - b.first);
		for (int j = i+2; j < n - 1; j++) {
			pii d = a[j], f = a[j + 1];
			if (f.first - d.first == 0) {
				swap(f, d);
			}
			int k = (f.second - d.second) / (f.first - d.first);
			if (m == k) {
				double dist = sqrt(pow(c.first - b.first, 2) + pow(c.second - b.second, 2) * 1.0);
				double dist2 = sqrt(pow(f.first - d.first, 2) + pow(f.second - d.second, 2) * 1.0);
				if (dist * 2 == dist2 or dist == dist2 * 2) ans++;
			}
		}
	}
	outn(ans);
}

