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

void TheMonster() {
	sync;
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    bool ok = false;
    for (int i =0;i<=100;i++){
        for (int j=0;j<=100;j++){
            if (b+(a*i) == d+(c*j)){
                ok = true;
                cout << b+(a*i) << '\n';
                break;
            }
        }
        if (ok) break;
    }
    if (!ok) cout << -1  << '\n';
    
}   