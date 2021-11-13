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


void ShellGame() {
	sync;
	ll n;
	int x;
	read(n, x);
	int a[3];
	memset(a, 0, sizeof(a));
	a[x] = 1;
	for (int i = n % 6; i > 0; i--) {
		if (i % 2) swap(a[0], a[1]);
		else swap(a[1], a[2]);
	}
	cout << find(a, a + 3, 1) - a << '\n';
}