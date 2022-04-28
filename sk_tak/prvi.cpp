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
		cout << a[i] << ' ';
	}
	cout << '\n';
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

bool customSort(int a, int b) {
	return a % 2 < b % 2;
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

bool isPrime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

pii update(pii igrac, int i) {
	switch (i)
	{
	case 1:
		igrac.ff++, igrac.ss--;
		break;
	case 2:
		igrac.ff++;
		break;
	case 3:
		igrac.ff++, igrac.ss++;
		break;
	case 4:
		igrac.ss--;
		break;
	case 6:
		igrac.ss++;
		break;
	case 7:
		igrac.ff--, igrac.ss--;
		break;
	case 8:
		igrac.ff--;
		break;
	case 9:
		igrac.ff--, igrac.ss++;
		break;
	default:
		break;
	}
	return igrac;
}


int form(pii igrac, pii r) {
	return abs(igrac.ff - r.ff) + abs(igrac.ss - r.ss);
}


int main() {
	sync;
	int n, m;
	cin >> n >> m;
	pii igrac;
	multiset<pii> roboti;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char d;
			cin >> d;
			if (d == 'I') igrac = { i,j };
			else if (d == 'R') roboti.insert({ i,j });
		}
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		igrac = update(igrac, s[i] - '0');
		multiset<pii> novi_roboti;
		for (pii robot : roboti) {
			int b = form(igrac, robot);
			pii temp = robot;
			for (int j = 1; j < 10; j++) {
				pii novi_r = update(robot, j);
				int c = form(igrac, novi_r);
				if (c < b) {
					b = c;
					temp = novi_r;
				}
			}
			if (!b) {
				cout << "kraj " << i + 1 << '\n';
				return 0;
			}
			novi_roboti.insert(temp);
		}
		roboti = novi_roboti;
		for (pii robot : novi_roboti) {
			if (novi_roboti.count(robot) > 1) {
				roboti.erase(robot);
			}
		}
	}
	vector<vector<char>> a(n, vector<char>(m, '.'));
	a[igrac.ff][igrac.ss] = 'I';
	for (pii robot : roboti) {
		a[robot.ff][robot.ss] = 'R';
	}
	for (vector<char> v : a) {
		for (char c : v) {
			cout << c;
		}
		cout << '\n';
	}
}

