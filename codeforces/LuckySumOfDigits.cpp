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


void LuckySumOfDigits()
{
	sync;
	int n;
	cin >> n;
	int a = n / 7, b = n % 7;
	int c = b / 4, d = b % 4;
	if (a < d) {
		cout << -1 << '\n';
	}
	else {
		string s((c + 2 * d), '4');
		string s2((a - d), '7');
		cout << s + s2 << '\n';
	}
}






