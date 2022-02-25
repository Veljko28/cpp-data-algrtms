#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

void MultiplicationTable(){
    sync;
    int n;
    cin >> n;
    vector<vector<ll>> a(n,vector<ll>(n));
    for (int i =0;i<n;i++){
        for (int j = 0;j<n;j++){
            cin >> a[i][j];
        }
    }
    ll ans = sqrt((a[0][1]*a[0][2])/a[1][2]);
    cout << ans << ' ';
    for (int i = 1;i<n;i++){
        cout << a[0][i]/ans << ' ';
    }
    cout << '\n';
}
