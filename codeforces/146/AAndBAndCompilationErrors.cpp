#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>

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
#define prv(a) for (auto i : a) cout << i << ' '; cout << '\n';

const int mod = 1e9 + 7;

int solve(map<int,int> m, int n) {
    for (int i =0,j;i<n;i++){
        cin >> j;
        m[j]--;
    }
    for (auto p : m) {
        if (p.ss) return p.ff;
    }
}

void AAndBAndCompilationErrors() {
	sync;
    int n;
    cin >> n;
    map<int,int> m;
    for (int i =0,j;i<n;i++){
        cin >> j;
        m[j]++;
    }
    int a = solve(m,n-1);
    cout << a << '\n';
    m[a]--;
    cout << solve(m,n-2) << '\n';
}
