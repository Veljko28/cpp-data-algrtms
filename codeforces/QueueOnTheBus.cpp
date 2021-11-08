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
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
using namespace std;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void QueueOnTheBus() {
	sync;
	int n, m, ans = 0;
	read(n, m);
	vi a(n);
	vifor(a);
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
		if (s == m) {
			s = 0;
			ans++;
		}
		else if (s > m) {
			s = a[i];
			ans++;
		}
	}
	if (s != 0) ans++;
	cout << ans << '\n';
}