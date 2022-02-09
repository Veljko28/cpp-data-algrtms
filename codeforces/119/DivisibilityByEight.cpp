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
	if (a.se == b.se) {
		return a.fi > b.fi;
	}
	return a.se < b.se;
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

void DivisibilityByEight() {
	sync;
    string s;
    cin >> s;
    if (s.find("0") != string::npos){
        cout << "YES" << '\n';
        cout << 0;
        return;
    }
    if (s.find("8") != string::npos){
        cout << "YES" << '\n';
        cout << 8;
        return;
    }
    if (s.length() < 3){
        if (stoi(s)%8==0){
            cout << "YES" << '\n';
            cout << s;
        }
        else cout << "NO" << '\n';
        return;
    }
    for (int i =0;i<s.length();i++){
        for (int j = i+1;j<s.length();j++){
            for (int k =j+1;k<s.length();k++){
                string t,c;
                t += s[i]; t += s[j]; t += s[k];
                c += s[i]; c += s[k];
                if (stoi(t) % 8 == 0)
                {
                    cout << "YES" << '\n';
                    cout << t;
                    return;
                }
                else if (stoi(t.substr(1))%8==0)
                {
                    cout << "YES" << '\n';
                    cout << t.substr(1);
                    return;
                }
                else if (stoi(t.substr(0,2))%8==0)
                {
                    cout << "YES" << '\n';
                    cout << t.substr(0,2);
                    return;
                }
                else if (stoi(c)%8==0)
                {
                    cout << "YES" << '\n';
                    cout << c;
                    return;
                }
            }
        }
    }
    cout << "NO" << '\n';
}	