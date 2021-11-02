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
#include <unordered_map>;
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void Chocolates()
{
	sync;
    int n;
    ll ans = 0, c = 1000000001;
    cin >> n;
    vector<ll> a(n);
    for (ll& i : a) cin >> i;
    for (int i=n-1;i>=0;i--){
        c = min(c-1, a[i]);
        c = max(0LL,c);
        ans += c;
    }
    cout << ans << '\n';
}





