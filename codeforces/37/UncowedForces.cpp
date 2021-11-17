#include<bits/stdc++.h>
using namespace std;

void UncowedForces(){
    vector<int> a = {500,1000,1500,2000,2500};
    vector<int> m(5),w(5);
    for (int& i : m) cin >> i;
    for (int& j : w) cin >> j;
    int b,c, ans = 0;
    cin >> b >> c;
    for (int i=0;i<5;i++){
        ans += max(3*a[i]/10, (250-m[i]) * a[i]/250 - 50*w[i]);
    }
    cout << ans + (100*b) - (50*c) << '\n';
}