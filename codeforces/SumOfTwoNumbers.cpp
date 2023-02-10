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
    int n;
    cin >> n;
    if (n % 2 == 0) cout << n / 2 << ' ' << n / 2 << '\n';
    else if ((n%10) != 9) cout << n / 2 << ' ' << n / 2 + 1 << '\n';
    else {
        vector<int> a;
        int temp = n;
        while (temp) {
            a.push_back(temp % 10);
            temp /= 10;
        }
        vector<int> f, s;
        bool ok = 1;
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] % 2 == 0) {
                f.push_back(a[i] / 2);
                s.push_back(a[i] / 2);
            }
            else {
                if (ok) {
                    f.push_back(a[i] / 2);
                    s.push_back(a[i] / 2+1);
                }
                else {
                    f.push_back(a[i] / 2+1);
                    s.push_back(a[i] / 2);
                }
                ok ^= 1;
            }
        }
        int b = 0, c = 0, d = 1;
        for (int i = f.size()-1;i>=0;i--){
            b += d * f[i];
            d *= 10;
        }
        d = 1;
        for (int i = s.size()-1;i>=0;i--){
            c += d * s[i];
            d *= 10;
        }
        cout << b << ' ' << c << '\n';
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
