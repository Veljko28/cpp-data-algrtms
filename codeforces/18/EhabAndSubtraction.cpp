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


void EhabAndSubtraction()
{
    sync;
    int n, k;
    read(n, k);
    set<int> s;
    s.insert(0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    auto it = s.begin();
    for (int i = 0; i < k; i++) {
        if (next(it) == s.end()) {
            cout << 0 << '\n';
        }
        else {
            cout << *next(it) - *it << '\n';
            it = next(it);
        }
    }
}