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


string s;

int check(int idx, int i, int j, int ri, int rj) {
    if (idx == 10 or ((i + ri) < j) or ((j + rj) < i)) return 0;
    if (s[idx] == '0') {
        if (idx % 2) {
            rj--;
        }
        else {
            ri--;
        }
        return 1+check(idx + 1, i, j, ri, rj);
    }
    else if (s[idx] == '1') {
        if (idx % 2) {
            j++;
            rj--;
        }
        else {
            i++;
            ri--;
        }
        return 1+check(idx + 1, i, j, ri, rj);
    }
    else {
        if (idx % 2) {
            return 1+min(check(idx + 1, i, j + 1, ri, rj - 1), check(idx + 1, i, j, ri, rj - 1));
        }
        else return 1+min(check(idx + 1, i + 1 , j, ri-1, rj), check(idx + 1, i, j, ri-1, rj));
    }
}

void solve() {
    cin >> s;
    cout << check(0, 0, 0, 5, 5) << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}