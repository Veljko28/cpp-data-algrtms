#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

#define sync ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define vi vector<int>
#define vifor(a) for(int& i : a) cin >> i
#define pii pair<int,int>
#define all(a) (a).begin(), (a).end()

using namespace std;

void LepaMatrica(){
    sync;
    int n,m;
    cin >> n >> m;
    vector<vi> a(n,vi(m));
    for (vi& v : a){
        vifor(v);
    }
    vi r(n), c(m);
    ll ans = 0;
    for (int i =0;i<n;i++){
        for (int j =0;j<m;j++){
            int b = abs(a[(i+1)%n][j]-a[i][j]), d = abs(a[i][(j+1)%m]-a[i][j]);
            r[i] += b;
            c[j] += d;
            ans += d+b;
        }
    }
    cout << ans - *min_element(all(r)) - *min_element(all(c));
}