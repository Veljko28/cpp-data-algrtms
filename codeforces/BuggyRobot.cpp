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


void BuggyRobot() {
	sync;
	int n;
	string s;
	read(n, s);
	int a[2] = { 0,0 };
	for (char c : s) {
		switch (c)
		{
		case 'L': a[0]--; break;
		case 'R': a[0]++; break;
		case 'U': a[1]++; break;
		case 'D': a[1]--; break;
		default:
			break;
		}
	}
	cout << n - abs(a[0]) - abs(a[1]) << '\n';
}