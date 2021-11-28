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
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <deque>
#include <chrono>
#include <fstream>
#include <sstream>
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
		cout << a[i].first << " " << a[i].second << '\n';
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
	int o, a, b, ab;
	cin >> o >> a >> b >> ab;
	vector<pair<string, int>> pac;
	vector<string> ans;
	for (int i = 0; i < n; i++)
	{
		string s;
		int t;
		cin >> s >> t;
		pac.push_back({ s,t });
	}
	For(n) {
		string s = pac[i].first;
		int t = pac[i].second;
		if (s == "A") {
			if (a - t >= 0) {
				a -= t;
				ans.push_back("0 " + to_string(t) + " 0 0");
			}
			else {
				if (a + o - t >= 0) {
					o -= (t - a);
					ans.push_back(to_string(t - a) + " " + to_string(a) + " 0 0");
					a = 0;
				}
				else {
					nmg;
					return 0;
				}
			}
		}
		else if (s == "B") {
			if (b - t >= 0) {
				b -= t;
				ans.push_back("0 0 " + to_string(t) + " 0");
			}
			else {
				if (b + o - t >= 0) {
					o -= (t - b);
					ans.push_back(to_string(t - b) + " 0 " + to_string(b) + " 0");
					b = 0;
				}
				else {
					nmg;
					return 0;
				}
			}
		}
		else if (s == "O") {
			if (o - t >= 0) {
				o -= t;
				ans.push_back(to_string(t) + " 0 0 0");
			}
			else {
				nmg;
				return 0;
			}
		}
		else {
			if ((o + a + b + ab) < t) {
				nmg;
				return 0;
			}
			if (ab >= t) {
				ans.push_back("0 0 0 " + to_string(ab - t));
				break;
			}
			else t -= ab;
			int t0 = 0, t1 = 0;
			while (t) {
				if (a == b == 0) break;
				if (a > b) {
					t0++;
					t--;
				}
				else {
					t1++;
					t--;
				}
			}
			a -= t0; b -= t1;
			if (t) {
				o -= t;
				ans.push_back(to_string(t) + " " + to_string(t0) + " " + to_string(t1) + " " + to_string(ab));
			}
			else ans.push_back("0 " + to_string(t0) + " " + to_string(t1) + " " + to_string(ab));
		}
	}
	cout << "moguce" << '\n';
	For(ans.size()) {
		if (i + 1 == ans.size()) cout << ans[i];
		else cout << ans[i] << '\n';
	}
}

