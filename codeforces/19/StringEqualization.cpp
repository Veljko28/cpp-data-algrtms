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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void StringEqualization()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		read(a, b);
		sc s;
		bool ok = false;
		for (char c : a) s.insert(c);
		for (char k : b) {
			if (s.find(k) != s.end()) {
				ok = true;
				break;
			}
		}
		if (ok) yes;
		else no;
	}
}





