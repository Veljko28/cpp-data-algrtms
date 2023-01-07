#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>
#include <cstring>
#include <ctime>
#include <set>
#include <list>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <queue>
#include <deque>
#include <chrono>
#include <sstream>
#include <ostream>
#include <assert.h>
#include <cstdint>
#include <climits>
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
#define min_heap_pq priority_queue<int,vector<int>,greater<int>>
using namespace std;

const int MAXN = 2e5 + 5;
int n;
vector<ll> values, tree(4 * MAXN), lazy(4*MAXN);
vector<int> queryInput;
int l, r, c;

void constructTree(int idx, int s, int e) {
    if (s == e) {
        tree[idx] = values[s];
        return;
    }
    int mid = (s + e) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid + 1, e);

    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);
}


vector<int> splitString(string s) {
    vector<int> v;
    string a;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') a += s[i];
        else {
            v.push_back(stoi(a));
            a = "";
        }
    }
    if (a != "") v.push_back(stoi(a));

    return v;
}

ll minimalValue(int idx, int s, int e) {
    if (lazy[idx] != 0) {
        tree[idx] += lazy[idx];
        if (s != e) {
            lazy[2 * idx] += lazy[idx];
            lazy[2 * idx + 1] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if (s > r or e < l) return INT_MAX;
    if (s >= l and e <= r) return tree[idx];

    int mid = (s + e) / 2;

    return min(minimalValue(2 * idx, s, mid), minimalValue(2 * idx + 1, mid + 1, e));
}


void increaseRange(int idx, int s, int e) {
    if (lazy[idx] != 0) {
        tree[idx] += lazy[idx];
        if (s != e) {
            lazy[2 * idx] += lazy[idx];
            lazy[2 * idx + 1] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if (s > r or e < l) return;
    if (s >= l and e <= r) {
        tree[idx] += c;
        if (s != e) {
            lazy[2*idx] += c;
            lazy[2 * idx + 1] += c;
        }
        return;
    }
    int mid = (s + e) / 2;
    increaseRange(2 * idx, s, mid);
    increaseRange(2 * idx + 1, mid + 1, e);

    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);
}

void solve() {
    cin >> n;
    values = vector<ll>(n+1);
    for (int i = 1; i <= n; i++) cin >> values[i];
    constructTree(1, 1, n);
    int q;
    cin >> q;
    cin.ignore(INT_MAX, '\n');
    string s;
    while (q--) {
        getline(cin, s);
        queryInput = splitString(s);
        if (queryInput.size() == 2) {
            if (queryInput[1] < queryInput[0]) {
                l = queryInput[0]+1, r = n;
                ll mn = minimalValue(1,1,n);
                l = 1, r = queryInput[1]+1;
                cout << min(mn, minimalValue(1,1,n)) << '\n';
            }
            else {
                l = queryInput[0]+1, r = queryInput[1]+1;
                cout << minimalValue(1,1,n) << '\n';
            }
        }
        else {
            c = queryInput[2];
            if (queryInput[1] < queryInput[0]) {
                l = queryInput[0]+1, r = n;
                increaseRange(1,1,n);
                l = 1, r = queryInput[1]+1;
                increaseRange(1,1,n);
            }
            else {
                l = queryInput[0] + 1, r = queryInput[1] + 1;
                increaseRange(1,1,n);
            }

        }
    }
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}