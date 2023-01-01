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

const int MAXN = 17;
int n, m;
vector<ll> tree(4*(1LL<<MAXN)+5);
vector<ll> values;
bool d = 0;
int p, b;

void constructTree(int idx,int s, int e) {
    if (s == e) {
        d = 0;
        tree[idx] = values[s];
        return;
    }
    int mid = (s + e) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid+1, e);

    if (d) tree[idx] = tree[2 * idx] ^ tree[2 * idx + 1];
    else tree[idx] = tree[2 * idx] | tree[2 * idx + 1];

    d ^= 1;
}

void update(int idx, int s, int e) {
    if (s == p and e == p) {
        tree[idx] = values[p];
        d = 0;
        return;
    }
    
    int mid = (s + e) / 2;
    if (p <= mid) update(2 * idx, s, mid);
    else update(2 * idx + 1, mid + 1, e);

    if (d) tree[idx] = tree[2 * idx] ^ tree[2 * idx + 1];
    else tree[idx] = tree[2 * idx] | tree[2 * idx + 1];

    d ^= 1;
}

void solve() {
    cin >> n >> m;
    ll size = (1ll << n);
    values = vector<ll>(size+5);
    for (int i = 1; i <= size; i++) cin >> values[i];
    constructTree(1,1,size);
    while (m--) {
        cin >> p >> b;
        values[p] = b;
        update(1,1,size);
        cout << tree[1] << '\n';
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