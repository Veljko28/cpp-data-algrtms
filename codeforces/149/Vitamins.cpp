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

void Vitamins() {
	sync;
    int n;
    cin >> n;
    vector<pair<int,string>> a,b,f;
    int mn = INT_MAX;
    for (int i =0;i<n;i++){
        int h; string s;
        cin >> h >> s;
        if (s.length() == 3) mn = min(mn,h);
        else {
            if (s[0] == 'A' or s[1] == 'A') a.push_back({h,s});
            if (s[0] == 'B' or s[1] == 'B') b.push_back({h,s}); 
            if (s[0] == 'C' or s[1] == 'C') f.push_back({h,s});
        }
    }
    if ((a.empty() or b.empty() or f.empty()) and mn == INT_MAX){
        cout << -1 << '\n';
        return 0;
    }
    for (int i =0;i<a.size();i++){
        vector<bool> c(3,0);
        c[0] = 1;
        if (a[i].ss[0] == 'B' or a[i].ss[1] == 'B') c[1] = 1;
        if (a[i].ss[0] == 'C' or a[i].ss[1] == 'C') c[2] = 1;
        if (!c[1]){
            for (int j = 0;j<b.size();j++){
                vector<bool> d = c;
                d[1] = 1;
                if (d[2] or b[j].ss[0] == 'C' or b[j].ss[1] == 'C') mn = min(mn,a[i].ff+b[j].ff);
                else {
                    for (int k = 0;k<f.size();k++) 
                        mn = min(mn,a[i].ff+b[j].ff+f[k].ff);
                }
            }
        }
        else if (!c[2]){
            for (int k = 0;k<f.size();k++) 
                mn = min(mn,a[i].ff+f[k].ff);
        }
    }
    cout << mn << '\n';
}