#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <stack>
using namespace std;
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void DzyLikesStrings()
{
    sync;   
    string s;
    cin >> s;
    int k, m = 0, ans = 0;
    cin >> k;
    int a[26];
    for (int i=0;i<26;i++){
        cin >> a[i];
        m = max(m,a[i]);
    }
    int i;
    for (i=0;i<s.length();i++){
        ans += a[s[i] - 97] * (i+1);
    }
    for (int j = 0;j<k;j++) ans += m * (++i); 
    cout << ans << '\n';
}