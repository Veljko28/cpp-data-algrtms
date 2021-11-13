#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <deque>
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}

void solve31() {
    int n, i;
    string s;
    read(n, s);
    int ans = n;
    int l = n, r = -1;
    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            r = i;
            break;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            l = i;
            break;
        }
    }
    cout << max(n, 2 * max(r + 1, n - l)) << '\n';

}

void RoomsAndStaircases()
{
    sync;
    int t;
    cin >> t;
    while (t--) {
        solve31();
    }
}






