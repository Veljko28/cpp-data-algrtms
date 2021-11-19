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
#define minus pf("-1\n")
#define imp pf("Impossible\n")
#define vi vector<int>
#define vll vector<ll>
#define si set<int>
#define sc set<char>
#define pii pair<int,int>
#define pci pair<char,int>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define vllfor(v) for (ll& i : v) cin >> i;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define outn(a) cout << a << '\n'
using namespace std;

template<typename T>
void prv(vector<T> a) {
	for (int i = 0; i < a.size(); i++) {
		if (i + 1 == a.size()) cout << a[i] << '\n';
		else cout << a[i] << ' ';
	}
}

//template<typename... T>
//void read(T& ...args) {
//	((cin >> args), ...);
//}

void solve41() {
	int n;
	cin >> n;
	int k = -1;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		if (b != 1 and k == -1) {
			k = i;
		}
	}
	if ((k == -1 and n % 2) or (k % 2 == 0)) { cout << "First" << '\n'; }
	else cout << "Second" << '\n';
	return;
}

void SequentialNim() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve41();
	}
}

