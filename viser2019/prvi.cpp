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
	return abs(a) > abs(b);
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
	cout << "*****  odgovor "+to_string(odg++)+"  *****\n\n";
}


bool checkPali(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (tolower(s[i]) != tolower(s[s.length() - 1 - i])) {
			return false;
		}
	}
	return true;
}


vvi okreni(vvi f) {
	vvi t(5,vi(5));

	t[2][2] = f[2][2]; // centar

	// ivice
	for (int i = 1; i < 5; i++) t[0][i - 1] = f[0][i];
	for (int i = 0; i < 4; i++) t[i+1][0] = f[i][0];
	for (int i = 0; i < 4; i++) t[4][i+1] = f[4][i];
	for (int i = 1; i < 5; i++) t[i-1][4] = f[i][4];

	t[2][1] = f[1][1];
	t[3][1] = f[2][1];

	t[3][2] = f[3][1];
	t[3][3] = f[3][2];

	t[2][3] = f[3][3];
	t[1][3] = f[2][3];

	t[1][2] = f[1][3];
	t[1][1] = f[1][2];

	return t;
}

void prvi() {
	cout << "********** ULAZ  **********\n\n\n";
	cout << "Unesite 10-cifreni broj\n";
	string a;
	cin >> a;
	int z;
	cout << "Unesite broj rotacija\n";
	cin >> z;
	system("CLS");
	cout << "*****  IZLAZI  *****\n\n\n";
	sledOdg();
	string b = a;
	int s = 0;
	for (char c : b) {
		s += c - '0';
	}
	pf("Srednja vrednost svih cifara je : %.2f\n\n", s / (double)b.length());
	sledOdg();
	string c = a;
	for (int i = 0; i < 5; i++) {
		string t;
		t += c[i];
		t += c[9 - i];
		int br = stoi(t);
		if (isPrime(br)) {
			cout << "Broj " + t + " je prost broj\n\n";
		}
	}
	sledOdg();
	vi d(10, 0);
	for (char c : a) {
		d[c - '0']++;
	}
	for (int i = 0; i < 10; i++) {
		if (!d[i]) d[i] = a[i] - '0';
		cout << i << ": " << d[i] << '\n';
	}
	cout << '\n';
	sledOdg();
	vvi f;
	f.push_back({ d[0],d[1],d[2],d[3],d[4] });
	f.push_back({ d[5],d[6],d[7],d[8],d[9] });
	for (int i = 2; i < 5; i++) {
		vi t(5);
		for (int j = 0; j < 5; j++) {
			t[j] = f[i - 1][j] + f[i - 2][j];
		}
		f.push_back(t);
	}
	for (int i = 0; i < 5; i++) {
		int s = 0;
		for (int j = 0; j < 5; j++) {
			s += f[j][i];
		}
		f[i][i] = s;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << f[i][j] << '\t';
		}
		cout << '\n';
	}
	sledOdg();
	while (z--) {
		f = okreni(f);
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << f[i][j] << '\t';
		}
		cout << '\n';
	}
}