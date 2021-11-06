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
const int maxn = 1e5 + 5;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void HamsterFarm()
{
	sync;
	ull n, k;
	read(n, k);
	ull ans[2], max = 0;
	ans[0] = 1;
	ans[1] = 0;
	for (int i = 1; i <= k; i++) {
		ull a;
		cin >> a;
		if (a * (n / a) > max && n >= a * (n / a)) {
			ans[0] = i; ans[1] = (n / a);
			max = a * (n / a);
		}
	}
	cout << ans[0] << " " << ans[1] << '\n';
}