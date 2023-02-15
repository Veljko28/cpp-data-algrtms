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

int n, m, k;
vector<string> grid;
vector<vector<bool>> walked;

int walk(int i, int j) {
    if (!k) return 0;
    walked[i][j] = 1;
    int amount = 0;
    if (i + 1 < n and !walked[i+1][j] and grid[i + 1][j] == '.') amount += walk(i + 1, j);
    if (j + 1 < m and !walked[i][j+1] and grid[i][j+1] == '.') amount += walk(i, j+1);
    if (i - 1 >= 0 and !walked[i-1][j] and grid[i-1][j] == '.') amount += walk(i-1, j);
    if (j - 1 >= 0 and !walked[i][j - 1] and grid[i][j - 1] == '.') amount += walk(i, j - 1);


    if (!k) return 0;
    if (amount == 0) {
        grid[i][j] = 'X', k--;
        return 0;
    }
    else return 1;
}

void solve() {
    cin >> n >> m >> k;
    grid = vector<string>(n);
    walked = vector<vector<bool>>(n, vector<bool>(m));
    for (string& s : grid) cin >> s;
    cout << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0;j<m;j++){
            if (grid[i][j] == '.') {
                walk(i, j);
                for (string s : grid) {
                    cout << s << '\n';
                }
                return;
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
