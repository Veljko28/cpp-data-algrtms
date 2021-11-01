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


void CityDay()
{
	sync;
	int n, x, y;
	read(n, x, y);
	vi a(n);
	vifor(a);
	for (int i = 0; i < n; i++) {
		int b = a[i];
		bool f = true;
		for (int j = i - 1; j > i - x - 1; j--) {
			if (j >= 0 and a[j] <= b) f = false;
		}
		for (int k = i + 1; k < i + y + 1; k++) {
			if (k < n and a[k] <= b) f = false;
		}
		if (f) {
			cout << i + 1 << '\n';
			return;
		}
	}
}






