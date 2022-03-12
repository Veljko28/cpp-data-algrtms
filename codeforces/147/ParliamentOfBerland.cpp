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
#include <queue>
#include <deque>
#include <chrono>
#include <fstream>
#include <sstream>
#include <ostream>
#include <assert.h>
#include <cstdint>
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define pi 3.1415926535897932384626429750288419716939937510
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define minus pf("-1\n")
#define imp pf("impossible\n")
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vb vector<bool>
#define vll vector<ll>
#define si set<int>
#define sc set<char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pci pair<char,int>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n-1;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define vbfor(v) for (bool& i : v) cin >> i;
#define ovifor(v, n) for (int i =1;i<=n;i++) cin >> v[i]; 
#define vllfor(v) for (ll& i : v) cin >> i;
#define vpiifor(v,n) for (int i = 0,j;i<n;i++) { cin >> j; a[i] = {j,i}; }
#define vsfor(v) for (string& s : v) cin >> s;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define outn(a) cout << a << '\n'
#define out(a) cout << a << " "
#define ff first
#define ss second
#define nmg pf("nemoguce\n");
#define mg pf("moguce\n");
#define msi multiset<int> 
#define mss multiset<string>
#define min_heap_pq priority_queue<int,vi,greater<int>>
#define bit_count(x) __builtin_popcount(x);
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
	return a.ff < b.ff;
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

int SumOfDigits(ll n) {
	int ans = 0;
	while (n) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

bool isPalindrome(string s) {
	string t = s;
	reverse(all(t));
	return t == s;
}

int n, a, b;


bool p(int a, int b) {
	return a % 2 == b % 2;
}

vvi solve(bool ok) {
	vvi c(a, vi(b,0));
	int f = ok + 1, s = (f == 1) ? 2 : 1;
	bool br = false, tm = true;
	for (int i = 0; i < a; i++) {
		if (i > 0 and c[i - 1][0] % 2) tm = (f % 2==0);
		else if (i > 0 and c[i - 1][0] % 2 == 0) tm = (f % 2);
		for (int j = 0; j < b; j++) {
			c[i][j] = (tm ? (f>n ? 0 : f) : (s>n ? 0 : s));
			if ((tm ? f : s) == n) {
				if ((tm ? s : f) < n) c[i][j + 1] = (tm ? s : f);
				br = true;
				break;
			}
			if (tm) f+=2;
			else s+=2;
			tm ^= 1;
		}
		if (br) break;
	}
	br = true;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++) {
			if (!c[i][j]) continue;
			if ((j + 1 < b and c[i][j+1] and p(c[i][j], c[i][j + 1])) or 
				(i + 1 < a and c[i+1][j] and p(c[i][j], c[i + 1][j])) or
				(j - 1 >= 0 and c[i][j-1] and p(c[i][j], c[i][j - 1])) or 
				(i - 1 >= 0 and c[i-1][j] and p(c[i][j], c[i - 1][j]))) {
				br = false;
				break;
			}
		}
	}
	if (br) return c;
	else return {};
}

void ParliamentOfBerland() {
	sync;
	cin >> n >> a >> b;
	if (n > (a * b)) {
		cout << -1 << '\n';
		return 0;
	}
	vvi ans = solve(false);
	if (ans.empty()) {
		ans = solve(true);
		if (ans.empty()) cout << -1 << '\n';
	}
	else {
		for (vi v : ans) {
			prv(v);
		}
	}
}