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

void EvenArray() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vi b(2);
        for (int i =0,j;i<n;i++){
            cin >> j;
            if ((j%2) != (i%2)) b[j%2]++;
        }
        if (b[0]!=b[1]) cout << -1 << '\n';
        else cout << b[0] << '\n';
    }
}