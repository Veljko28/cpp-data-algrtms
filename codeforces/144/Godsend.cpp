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

const int mod = 1e9 + 7;

void Godsend() {
	sync;
    int n;
    cin >> n;
    int a = 0;
    for (int i =0,j;i<n;i++){
        cin >> j;
        if (j%2) a++;
    }
    if (a%2) cout << "First" << '\n';
    else {
        if (a == 0) cout << "Second" << '\n';
        else cout << "First" << '\n';
    }
}
