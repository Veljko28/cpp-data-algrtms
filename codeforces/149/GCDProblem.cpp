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

void GCDProblem() {
	sync;
	int t;
	cin >> t;
	while (t--){
	    int n;
	    cin >> n;
	    if (n%2==0) cout << "2 " << n-3 << " 1\n";
	    else {
	        int a = (n-1)/2;
	        if (a%2) cout << a-2 << ' ' << a+2 << ' ' << 1 << '\n';
	        else cout << a-1 << ' ' << a+1 << ' ' << 1 << '\n';
	    }
	    
	}
}