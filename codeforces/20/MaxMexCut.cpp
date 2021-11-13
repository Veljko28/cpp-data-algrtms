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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

int solve30(string s) {
	int a = count(s.begin(), s.end(), '0');
	bool b = false, c = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') b = true;
		if (s[i] == '1') c = true;
		if (b && c) {
			a++;
			b = false; c = false;
		}
	}
	return a;
}

void MaxMex()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a, b;
		read(a, b);
		string s = "";
		int sum = 0;
		For(n) {
			if (a[i] != b[i]) {
				sum += 2 + solve30(s);
				s = "";
			}
			else s += a[i];
		}
		cout << sum + solve30(s) << '\n';
	}
}





