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
#define minus pf("-1\n");
#define imp pf("Impossible\n");
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define NDEBUG
using namespace std;

template<typename T>
void prv(vector<T> a) {
	for (int i = 0; i < a.size(); i++) {
		if (i + 1 == a.size()) cout << a[i] << '\n';
		else cout << a[i] << ' ';
	}
}

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void PalindromicTimes() {
	sync;
	string s;
	cin >> s;
	int a = stoi(s.substr(0, 2)), b = stoi(s.substr(3, 4));
	b++;
	while (true) {
		if (b == 60) {
			a++; b = 0;
		}
		if (a == 24) a = 0;
		string o = to_string(a), p = to_string(b);
		if (o.length() == 1) o.insert(0, "0");
		if (p.length() == 1) p += '0';
		else {
			reverse(p.begin(), p.end());
		}
		if (o == p) {
			reverse(p.begin(), p.end());
			cout << o + ':' << p << '\n';
			return;
		}
		b++;
	}

}