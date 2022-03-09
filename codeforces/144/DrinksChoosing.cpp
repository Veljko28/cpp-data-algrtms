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

void DrinksChoosing() {
	sync;
    int n,k;
    cin >> n >> k;
    map<int,int> m;
    for (int i =0,j;i<n;i++){
        cin >> j;
        m[j]++;
    }
    priority_queue<pii> q;
    for (auto p : m){
        q.push({p.ss,p.ff});   
    }
    int t = ceil((double)n/2.0);
    int ans = 0;
    for (int i =0;i<t;i++){
        pii x = q.top();
        ans += max(min(x.ff,2),0);
        x.ff-=2;
        q.pop();
        q.push(x);
    }
    cout << ans;
}
