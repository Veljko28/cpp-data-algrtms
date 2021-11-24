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
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define minus pf("-1\n")
#define imp pf("Impossible\n")
#define vi vector<int>
#define vll vector<ll>
#define si set<int>
#define sc set<char>
#define pii pair<int,int>
#define pci pair<char,int>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n-1;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define vllfor(v) for (ll& i : v) cin >> i;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define outn(a) cout << a << '\n'
#define fi first
#define se second
using namespace std;

template<typename T>
void prv(vector<T> a) {
    for (int i = 0; i < a.size(); i++) {
        if (i + 1 == a.size()) cout << a[i] << '\n';
        else cout << a[i] << ' ';
    }
}

template<typename T, typename N>
void prvp(vector<pair<T, N>> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].first << " " << a[i].second << '\n';
    }
}

//template<typename... T>
//void read(T& ...args) {
//	((cin >> args), ...);
//}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void PalindromeDance() {
    sync;
    int n, w, b;
    int a[100];

    cin >> n >> w >> b;
    For(n) {
        cin >> a[i];
    }

    int mini, maxi;
    if (w <= b) {
        mini = w;
        maxi = b;
    }
    else {
        mini = b;
        maxi = w;
    }

    int st = 0, endi = n - 1, cost = 0;

    while (st <= endi) {

        if (a[st] == a[endi] && a[st] == 2) {
            if (st != endi)
                cost += 2 * mini;
            else
                cost += mini;
        }

        if (a[st] != a[endi]) {

            if (a[st] != 2 && a[endi] != 2) {
                minus;
                return;
            }

            if (a[st] == 0 || a[endi] == 0)
                cost += w;
            else if (a[st] == 1 || a[endi] == 1)
                cost += b;

        }

        st++; endi--;
    }

    cout << cost << endl;
}


