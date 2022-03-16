#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vbfor(a) for (auto& i : a) cin >> i
#define all(a) (a).begin(), (a).end()
#define prv(a) for (int i =0;i<a.size();i++) { if (i+1 == a.size() ) cout << a[i] << '\n'; else cout << a[i] << ' '; }
#define ff first
#define ss second

using namespace std;

void GreatSequence() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int n,x;
        cin >> n >> x;
        vll a(n);
        vbfor(a);
        sort(all(a));
        int ans = 0;
        int j=0,k=0;
        vb b(n);
        for (int i =0;i<n;i++){
            if (b[i]) continue;
            if (a[i]*x > a[j]){
                while (a[i]*x >= a[j] and j < n) k = j++;
                k = --j;
            }
            if (i < k and a[i]*x==a[k]) b[k--] = true;
            else ans++;
        }
      cout << ans << '\n';
    }
}   