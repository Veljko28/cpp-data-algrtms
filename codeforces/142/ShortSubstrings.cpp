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

void ShortSubstrings() {
	sync;
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        string ans = s.substr(0,2);
        for (int i =3;i<s.length();i+=2){
            ans += s[i];
        }
        cout << ans << '\n';
    }
}