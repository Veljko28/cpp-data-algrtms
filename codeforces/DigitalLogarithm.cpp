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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int& i : a) cin >> i;
        for (int& i : b) cin >> i;
        priority_queue<int> pq(all(a));
        priority_queue<int> pq2(all(b));
        int ans = 0;
        while (!pq.empty()) {
            int v = pq.top(), u = pq2.top();
            if (u == v) {
                pq.pop();
                pq2.pop();
                continue;
            }

            if (v > u) {
                pq.push(to_string(v).size());
                pq.pop();
            }
            else {
                pq2.push(to_string(u).size());
                pq2.pop();
            }
            ans++;
        }
        cout << ans << '\n';
    }
}
