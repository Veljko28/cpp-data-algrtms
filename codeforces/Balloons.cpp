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
#define minus pf("-1\n");
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

void Balloons() {
	sync;
	int n;
	cin >> n;
	vi a(n);
	vifor(a);
	vi b = a;
	sort(a.begin(), a.end());
	int sum = accumulate(a.begin() + 1, a.end(), 0);
	if (a[0] == sum or sum == 0 or a[0] == 0)
	{
		minus;
	}
	else {
		cout << 1 << '\n';
		for (int i = 0; i < n; i++) {
			if (a[0] == b[i]) {
				cout << i + 1 << '\n';
				return;
			}
		}
	}
}