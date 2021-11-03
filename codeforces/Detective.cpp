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


void Detective()
{
	sync;
	int n;
	cin >> n;
    vector<int> a(n);
    for (int i =0;i<n;i++){
        cin >> a[i];
        a[i]--;
    }
    int c =0, pos =0;
    while (pos < n){
        c++;
        int m = pos;
        while (pos <= n and pos <= m){
            m = max(m,a[pos]);
            pos++;
        }
        
    }
    cout << c << '\n';
}





