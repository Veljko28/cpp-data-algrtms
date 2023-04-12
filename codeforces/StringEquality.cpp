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
    int n,k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    vector<int> cnt1(26), cnt2(26);
    for (char c : a) cnt1[c - 97]++;
    for (char c : b) {
        if (cnt1[c - 97]) {
            cnt1[c - 97]--;
        }
        else cnt2[c - 97]++;
    }
    bool ok = 1;
    for (int i = 0; i < 26; i++) {
        if (cnt1[i] % k == 0) {
            for (int j = i+1; j < 26; j++) {
                if (!cnt1[i]) break;
                int temp = min(cnt2[j]-(cnt2[j]%k), cnt1[i]);
                cnt2[j] -= temp;
                cnt1[i] -= temp;
            }

            if (cnt1[i]) {
                ok = 0;
                break;
            }
        }
        else {
            ok = 0;
            break;
        }
    }

    if (ok) cout << "Yes\n";
    else cout << "No\n";

}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
