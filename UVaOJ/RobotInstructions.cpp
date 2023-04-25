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
 
}


int main() {
    sync;
    int t;
    string tt;
    getline(cin, tt);
    t = stoi(tt);
    while (t--) {
        int n;
        string nn;
        getline(cin, nn);
        n = stoi(nn);
        vector<int> a(n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            string s;
            getline(cin, s);
            if (s == "LEFT") ans--, a[i] = -1;
            else if (s == "RIGHT") ans++, a[i] = 1;
            else {
                string at;
                for (int j = s.length() - 1; j >= 0; j--) {
                    if (s[j] == ' ') break;
                    else at = string(1,s[j]) + at; 
                }
                ans += a[stoi(at) - 1];
                a[i] = a[stoi(at) - 1];
            }
        }
        cout << ans << '\n';
    }
}
