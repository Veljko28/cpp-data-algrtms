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

void solve() {
    int c, s;
    int set = 1;
    while (scanf("%d", &c) != EOF) {
        scanf("%d", &s);
        int a[10];
        double sum = 0, total = 0;
        for (int i = 0; i < s; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        for (int i = s; i < 2 * c; i++) a[i] = 0;
        sum /= c;
        sort(a, a + 2*c);
        printf("Set #%d\n", set++);
        for (int i = 0; i < c; i++) {
            printf(" %d:", i);
            if (a[i]) printf(" %d", a[i]);
            if (a[2 * c - 1 - i] ) printf(" %d", a[2 * c - 1 - i]);
            total += abs(sum - (a[i] + a[2*c-1-i]));
            printf("\n");
        }
        printf("IMBALANCE = %.5lf\n\n", total);
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
