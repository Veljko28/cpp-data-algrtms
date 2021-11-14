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
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i 
#define all(a) (a).begin() (a).end()
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void solve37(){
        int n;
	    cin >> n;
	    vi a(n),b(n);
	    vifor(a); vifor(b);
	    bool c  = false, d = false;
	    for (int i=0;i<n;i++){
	        if (a[i] > b[i] and !c) {
	            no;
	            return;
	        }
	        else if (a[i] < b[i] and !d){
	            no; return;
	        }
	        if (a[i] == -1) c = true;
	        if (a[i] == 1) d = true;
	    }
	    yes;
}


void KindAnton()
{
	sync;
	int t;
	cin >> t;
	while (t--){
	    solve37();
	}
}