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


struct Box {
    int h;
    int w;
    int d;
};

void solve() {
    int n;
    cin >> n;
    vector<Box> boxes(3 * n);
    int idx = 0;
    for (int i = 0; i < n; i++) {
        Box a;
        cin >> a.w >> a.h >> a.d;
        if (a.w > a.d) swap(a.w, a.d);
        boxes[idx++] = a;

        boxes[idx].h = a.w;
        boxes[idx].d = max(a.h, a.d);
        boxes[idx].w = min(a.h, a.d);
        idx++;

        boxes[idx].h = a.d;
        boxes[idx].d = max(a.h, a.w);
        boxes[idx].w = min(a.h, a.w);
        idx++;
    }

    sort(all(boxes), [](Box& a, Box& b) {
        return (b.d * b.w) < (a.d * a.w);
        });

    n *= 3;

    vector<int> hbs(n);
    for (int i = 0; i < n; i++) {
        hbs[i] = boxes[i].h;
    }
    int mx = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (boxes[i].w < boxes[j].w and boxes[i].d < boxes[j].d) {
                hbs[i] = max(hbs[i], hbs[j] + boxes[i].h);
                mx = max(mx, hbs[i]);
            }
        }
    }
    cout << mx << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
