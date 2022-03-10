#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define prv(a) for (auto i : a) cout << i << ' '; cout << '\n';

const int mod = 1e9 + 7;

void DivMod() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int l,r,a;
        cin >> l >> r >> a;
        int ans = r/a + r%a;
        int m = r/a*a-1;
        if (m>=l) ans = max(ans,m/a+m%a);
        cout << ans << '\n';
    }
}
