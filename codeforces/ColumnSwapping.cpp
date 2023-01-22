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

int n, m;
vector<vector<int>> grid;


bool check(int a, int b) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            int c = (j == a ? b : j == b ? a : j);
            int d = (j + 1 == a ? b : j + 1 == b ? a : j+1);
            if (grid[i][c] > grid[i][d]) return false;
        }
    }
    return true;
}


void solve() {
    cin >> n >> m;
    grid = vector<vector<int>>(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    if (check(0,0)) {
        cout << "1 1\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        vector<int> b = grid[i];
        sort(all(b));
        int diff = 0;
        int l, r;
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != b[j]) {
                if (diff == 0) l = j;
                else if (diff == 1) r = j;
                else {
                    cout << "-1\n";
                    return;
                }
                diff++;
            }
        }
        if (diff == 2 and check(l, r)) {
            cout << l + 1 << ' ' << r + 1 << '\n';
            return;
        }
        else if (diff) {
            cout << "-1\n";
            return;
        }
    }
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}