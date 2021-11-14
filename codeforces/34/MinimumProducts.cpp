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
#define outn(a) cout << a << '\n'
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void MinimumProduct()
{
	sync;
    int t;
    cin >> t;
    while (t--){
        ll a,b,x,y,n;
        read(a,b,x,y,n);
        ll ans = 1e18;
        for (int i =0;i<2;i++){
            int d = min(n,a-x);
            int f = min(n-d,b-y);
            ans = min(ans, (a-d)*(b-f));
            swap(a,b);
            swap(x,y);
        }
        outn(ans);
        
    }
}
 