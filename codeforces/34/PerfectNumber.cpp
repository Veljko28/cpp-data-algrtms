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

void PerfectNumber()
{
	sync;
    int k;
    cin >> k;
    ull b = 0;
    while (k){
        b++;
        int d = 0, f = b;
        while (f){
            d += f % 10;
            f /= 10;
        }
        if (d == 10) k--;
    }
    outn(b);
    
}
 




