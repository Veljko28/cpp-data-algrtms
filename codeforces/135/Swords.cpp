#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

void Swords(){
    sync;
    int n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0, s = 0;
    for (ll& i : a){
        cin >> i;
        mx = max(mx,i);
        s += i;
    }
    ll b = mx - a[0];
    for (int i =1;i<n;i++){
        b = __gcd(b,mx-a[i]);
    }
    ll c = (1LL*mx*n-s)/b;
    cout << c << ' ' << b << '\n';
}
