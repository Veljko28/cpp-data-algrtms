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


void DiverseSubstring()
{
	sync;
	int n;
	string s;
	read(n, s);
	string temp;
	for (int i = 1; i < n; i++) {
		if (s[i - 1] != s[i]) {
			cout << "YES\n" << s[i - 1] << s[i] << '\n';
			return;
		}
	}
	no;
}






