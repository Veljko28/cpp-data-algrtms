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
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
const int maxn = 1e5 + 5;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}



void Cashier()
{
	sync;
	int n, l, a;
	read(n, l, a);
	int t[maxn], j[maxn];
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> j[i];
	}
	int s = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (t[i] - s) / a;
		s = t[i] + j[i];
	}
	ans += (l - s) / a;
	cout << ans << '\n';
}








