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

void MagicalCalendar() {
	sync;
	int t;
	cin >> t;
	while(t--){
	    ll n,r;
	    bool ok = false;
	    cin >> n >> r;
	    if (n<=1) {
	        cout << 1 << '\n';
	        continue;
	    }
	    if (n <= r) r = n-1,ok=1; 
	    cout << ok+((r+1)*r)/2 << '\n';
	}
}