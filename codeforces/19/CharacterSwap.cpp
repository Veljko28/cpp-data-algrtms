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
#define pb push_back

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void CharacterSwap()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a, b;
		read(a, b);
		vi vc; int c = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				c++;
				vc.pb(i);
			}
		}
		if (c > 2 or vc.size() < 2) {
			no;
		}
		else {
			if (a[vc[0]] == a[vc[1]] and b[vc[0]] == b[vc[1]]) yes;
			else no;
		}
	}
}





