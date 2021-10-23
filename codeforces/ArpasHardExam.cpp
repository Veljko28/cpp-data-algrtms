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
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void ArpasHardExam()
{
	sync;
	ll n;
	cin >> n;
	int ans[5] = { 0,8,4,2,6 };
	ll a = n % 4 == 0 ? 4 : n % 4;
	if (n == 0) cout << 1 << '\n';
	else cout << ans[a] << '\n';
}

