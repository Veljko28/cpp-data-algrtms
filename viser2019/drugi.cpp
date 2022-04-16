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

void drugi() {
	cout << "********** ULAZ  **********\n\n\n";
	cout << "Unesite string\n";
	string s;
	cin >> s;
	int n = (int)s.length() / 4;
	system("CLS");
	cout << "*****  IZLAZI  *****\n\n\n";
	sledOdg();
	if (checkPali(s)) cout << "String je palindrom\n\n";
	else cout << "String nije palindrom\n\n";
	sledOdg();
	string s2;
	for (int i = 0; i < s.length(); i++) {
		if (i + 1 < s.length()) {
			if (isdigit(s[i]) and isupper(s[i + 1])) {
				int dig = s[i] - '0';
				if (s[i + 1] + dig > 'Z') {
					s2 += 'A' + (s[i + 1] + dig - 'Z') - 1;
				}
				else s2 += s[i + 1] + dig;
				i++;
			}
			else s2 += s[i];
		}
		else s2 += s[i];
	}
	cout << s2 << "\n\n";
	sledOdg();
	string s3;
	vi cnt(4, 0);
	for (char c : s) {
		int d;
		if (isdigit(c)) d = (c - '0') + 'a';
		else d = tolower(c);

		if (97 <= d and d <= 103) s3 += 'a', cnt[0]++;
		if (104 <= d and d <= 110) s3 += 'b', cnt[1]++;
		if (111 <= d and d <= 117) s3 += 'c', cnt[2]++;
		if (118 <= d and d <= 122) s3 += 'd', cnt[3]++;
	}
	int izm = 0;
	for (int i = 0; i < 4; i++) {
		izm += abs(cnt[i] - n);
	}
	cout << "Broj izmena: " << izm / 2 << "\n\n";
	sledOdg();
	string s4 = s;
	if (!isdigit(s4[0])) s4 = "0" + s4;
	vs ans;
	int i = 0;
	while (true) {
		string tmp;
		tmp += s4[i];
		i++;
		while (i < s4.length() and !isdigit(s4[i])) tmp += s4[i++];
		ans.push_back(tmp);
		if (i >= s4.length()) break;
	}

	vs ans5 = ans;

	sort(all(ans));
	for (string st : ans) {
		cout << st;
	}
	cout << "\n\n";

	for (int l = 0; l < ans5[0].length(); l++) {
		char c = ans5[0][l];
		bool ok = false;
		vi idxs = { l };
		for (int j = 1; j < ans5.size(); j++) {
			auto f = ans5[j].find(c);
			if (f == string::npos) {
				ok = true;
				break;
			}
			idxs.push_back(f);
		}
		if (!ok) {
			for (int k = 0; k < ans5.size(); k++) {
				ans5[k].erase(ans5[k].begin() + idxs[k]);
			}
		}
	}

	sledOdg();
	for (string st : ans5) {
		cout << st;
	}
	cout << "\n\n";
}
