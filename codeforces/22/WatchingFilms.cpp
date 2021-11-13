#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>;
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}

void WatchingFilms()
{
    sync;
    int n, x, t = 1;
    int ans = 0;
    read(n, x);
    for (int i = 0; i < n; i++) {
        int l, r;
        read(l, r);
        t += x * ((l - t) / x);
        ans += r - t + 1;
        t = r + 1;
    }
    cout << ans << '\n';
}
