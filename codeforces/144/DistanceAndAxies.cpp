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
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'

const int mod = 1e9 + 7;

void DistanceAndAxis() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        if (n < k) cout << k-n << '\n';
        else if (n%2 == k%2) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
}
