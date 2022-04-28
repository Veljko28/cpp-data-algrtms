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

int odg = 1;

void sledOdg() {
	cout << "\n********** odgovor " + to_string(odg++) << " **********\n\n";
}


int main() {
	sync;
	string s;
	cout << "********** ULAZ **********\n";
	cout << "Unesite string\n";
	cin >> s;
	system("CLS");
	string s1;
	for (char c : s) {
		if (c >= 100 and c <= 110) s1 += c;
	}
	sledOdg();
	cout << s1 << '\n';
	string s2;
	for (char c : s) {
		if (c >= 97 and c <= 100) s2 += 'a';
		else if (c >= 101 and c <= 104) s2 += 'b';
		else if (c >= 105 and c <= 108) s2 += 'c';
		else if (c >= 109 and c <= 112) s2 += 'd';
		else if (c >= 113 and c <= 116) s2 += 'e';
		else if (c >= 117 and c <= 120) s2 += 'f';
		else s2 += 'x';
	}
	sledOdg();
	cout << s2 << '\n';
	int n = ceil(sqrt(s.length()));
	int l = 0;
	vs mat(n);
	for (string& st : mat) {
		st = string(n, '#');
	}
	for (int i = 0; i < n and l < s.length(); i++) {
		for (int j = 0; j < n and l < s.length(); j++) {
			mat[j][i] = s[l++];
		}
	}
	string s3;
	for (string st : mat) {
		s3 += st;
	}
	sledOdg();
	cout << s3 << '\n';
	sledOdg();
	vi a(26, 0);
	for (char c : s) {
		a[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (a[i]) cout << char('a' + i) << ": " << a[i] << '\n';
	}
	sledOdg();
	for (int j = 3; j > 0; j--) {
		cout << j << ' ';
		for (int i = 0; i < 26; i++) {
			if (j == 3 and a[i] > 3) cout << "+ ";
			else if (a[i] >= j) cout << "* ";
			else cout << "  ";
		}
		cout << '\n';
	}
	cout << "  ";
	for (char c = 'a'; c <= 'z'; c++) {
		cout << c << ' ';
	}
	cout << '\n';
}

