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

void PashaAndStick() {
	sync;
    int t = 1;
    //cin >> t;
    while (t--){
        ll n;
        cin >> n;
        if (n < 6 or n%2) { cout << 0 << '\n'; return 0; }
        int a = 1, b = (n/2)-1;
        cout << (a+b)/2 - (n%4==0);
    }
}
