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

void LCMProblem() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        if (r < 2*l) cout << -1 << ' ' << -1 << '\n';
        else cout << l << ' ' << 2*l << '\n';
    }
}
