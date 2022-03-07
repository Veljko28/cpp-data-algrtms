#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second

const int mod = 1e9 + 7;

void DrazilAndDate() {
	sync;
	int a,b,s;
	cin >> a >> b >> s;
	int l = s-(abs(a)+abs(b));
	if (l >= 0 and l%2 == 0) cout << "Yes" << '\n';
	else cout << "No" << '\n';
}