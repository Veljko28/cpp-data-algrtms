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

void ThereTwoTypesOfBurgers() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int b,p,f;
        cin >> b >> p >> f;
        int c,h;
        cin >> h >> c;
        int ans = 0;
        if (h > c){
            int a = min(b/2,p);
            ans += a*h;
            b -= (a*2);
            p -= a;
            a = min(b/2,f);
            ans += a*c;
        }
        else {
            int a = min(b/2,f);
            ans += a*c;
            b -= (a*2);
            f -= a;
            ans += min(b/2,p)*h;
        }
        cout << ans << '\n';
    }
}
