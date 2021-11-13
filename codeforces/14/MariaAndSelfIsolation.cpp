#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <stack>
using namespace std;
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve23() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0; i--) {
        if (i + 1 >= a[i]) {
            cout << i + 2 << '\n';
            return;
        }
    }
    cout << 1 << '\n';
}

void MariaSelfIsolation()
{
    sync;
    int t;
    cin >> t;
    while (t--) {
        solve23();
    }
}