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
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}


void MexOrMixup()
{
    sync;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        read(a, b);
        int c;
        if (a % 4 == 1) c = a - 1;
        else if (a % 4 == 2) c = 1;
        else if (a % 4 == 3) c = a;
        else c = 0;
        if (c == b) cout << a << '\n';
        else if ((c ^ b) != a) cout << a + 1 << '\n';
        else cout << a + 2 << '\n';
    }
}
