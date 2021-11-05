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

void solve35(){
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    if (n == 1){
        cout << a[0] << '\n';
        return;
    }
    sort(a.begin(),a.end());
    ans = a[0];
    for (int i = 1;i<n;i++){
        ans = max(ans, a[i] - a[i-1]);
    }
    cout << ans << '\n';   
}


void MinimumExtraction()
{
	sync;
    int t;
    cin >> t;
    while (t--){
     solve35();
    }
}





