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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void Emotions()
{
	sync;
	int n, m, k;
	read(n, m, k);
	vector<ll> a(n), b;
	for (ll& i : a) cin >> i;
	sort(a.begin(), a.end(), greater<ll>());
	cout << m / (k + 1) * 1ll * (a[0] * 1ll * k + a[1]) + m % (k + 1) * 1ll * a[0] << endl;
}








