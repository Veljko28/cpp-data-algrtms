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
    int r, c;
    cin >> r >> c;
    vector<vector<char>> m(r, vector<char>(c));
    int sr = 0, sc = 0, er = 0, ec = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[r][c];
            if (m[r][c] == 'S') {
                sr = i, sc = j;
            }
            if (m[r][c] == 'E') {
                er = i, ec = j;
            }
        }
    }
    vector<vector<bool>> visited(r, vector<bool>(c));
    int count = 0;
    bool ok = 0;
    int left = 1;
    int next = 0;
    vector<int> dr = { -1,1,0,0 }, dc = {0,0,1,-1};
    queue<int> qx, qy;
    qx.push(sr); qy.push(sc);
    visited[sr][sc] = 1;
    while (qx.size()) {
        int x = qx.front(); qx.pop();
        int y = qy.front(); qy.pop();
        if (x == er and y == ec) {
            ok = 1;
            break;
        }
        for (int i = 0; i < 4; i++) {
            int xx = x + dr[i];
            int yy = y + dc[i];

            if (xx >= r or xx < 0) continue;
            if (yy >= c or yy < 0) continue;
            if (visited[xx][yy] or m[xx][yy] == '#') continue;

            visited[xx][yy] = 1;
            qx.push(xx); qy.push(yy);
            next++;
        }

        left--;
        if (left == 0) {
            left = next;
            next = 0;
            count++;
        }
    }
    if (ok) cout << count << '\n';
    else cout << "-1\n";
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
