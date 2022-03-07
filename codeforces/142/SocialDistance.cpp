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

void SocialDistance() {
	sync;
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans =0;
        for (int i =0;i<n;){
            int j = i+1;
            for (;j<n and s[j]!='1';j++);
            int l = s[i] == '1' ? k : 0;
            int r = j < n and s[j] == '1' ? k : 0;
            int ln = (j-i) - (l+r+(l==k));
            if (ln > 0){
                ans += (ln+k)/(k+1);
            }
            i=j;
        }
        cout << ans << '\n';
    }
}
