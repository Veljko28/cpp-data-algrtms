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

using namespace std;

void ChallengingCliffs() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi a(n);
		vbfor(a);
		sort(all(a));
	    if (n == 2){
	        cout << a[0] << ' ' << a[1] << '\n';
	        continue;
	    }
	    int pos = -1, mn = INT_MAX;
	    for (int i = 1;i<n;i++){
	        if (mn > abs(a[i]-a[i-1])){
	            pos = i;
	            mn = abs(a[i]-a[i-1]);
	        }
	    }
	    for (int i = pos;i<n;i++){
	        cout << a[i] << ' ';
	    }
	    for (int i = 0;i<pos;i++){
	        cout << a[i] << ' ';
	    }
	    cout << '\n';
	    
	}
}