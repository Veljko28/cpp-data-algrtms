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
#include <unordered_map>
#include <deque>
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
const int maxn = 1e5 + 5;

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}



void BeautifulDivision()
{
    sync;
    int n;
    cin >> n;
    if (n % 32640 == 0)
        pf("32640\n");
    else if (n % 8128 == 0)
        pf("8128\n");
    else if (n % 2016 == 0)
        pf("2016\n");
    else if (n % 496 == 0)
        pf("496\n");
    else if (n % 120 == 0)
        pf("120\n");
    else if (n % 28 == 0)
        pf("28\n");
    else if (n % 6 == 0)
        pf("6\n");
    else
        pf("1\n");
}