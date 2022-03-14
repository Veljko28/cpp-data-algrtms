#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long 
#define vi vector<int>
#define vbfor(a) for (auto& i : a) cin >> i
#define all(a) (a).begin(), (a).end()
#define prv(a) for (int i =0;i<a.size();i++) { if (i+1 == a.size() ) cout << a[i] << '\n'; else cout << a[i] << ' '; }
#define ff first
#define ss second

using namespace std;

ll solve(ll n){
    if (n == 0) return 1;
    if (n < 10) return n;
    ll x = max(n%10*solve(n/10),9*solve(n/10-1));
    return x;
}

void Nirvana() {
	sync;
    ll n;
    cin >> n;
    cout << solve(n) << '\n';
}   