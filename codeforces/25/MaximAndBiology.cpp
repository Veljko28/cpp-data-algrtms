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
#define PI 3.14159265358979323846 

#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
const int maxn = 1e5 + 5;

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}



void MaximAndBiology()
{
    sync;
    int n, ans = INT_MAX;
    string s;
    read(n, s);
    int a, b, c, d, sum = 0;
    for (int i = 0; i < n - 3; i++)
    {
        a = abs(s[i] - 'A');
        a = min(26 - a, a);
        b = abs(s[i + 1] - 'C');
        b = min(26 - b, b);
        c = abs(s[i + 2] - 'T');
        c = min(26 - c, c);
        d = abs(s[i + 3] - 'G');
        d = min(26 - d, d);
        sum = a + b + c + d;
        ans = min(ans, sum);
    }
    cout << ans << '\n';
}