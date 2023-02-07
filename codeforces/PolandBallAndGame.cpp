#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <climits>
#include <map>
#include <set>
#include <string>
#include <queue>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define ll long long

using namespace std;

int main() {
    sync;
    int n, m;
    cin >> n >> m;
    set<string> a;
    string s;
    int ok = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a.insert(s);
    }
    for (int i = 0; i < m; i++) {
        cin >> s;
        if (a.find(s) != a.end()) ok++;
    }
    if (n > (m - (ok%2))) cout << "YES\n";
    else cout << "NO\n";
}
