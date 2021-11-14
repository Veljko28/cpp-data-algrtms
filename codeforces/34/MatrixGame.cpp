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

void MatrixGame()
{
	sync;
    int t;
    cin >> t;
    while (t--){
        string s[2] = {"Ashish", "Vivek"}; 
        int n,m;
        read(n,m);
        vector<vi> a(n);
        set<int> s1,s2;
        for (int i =0;i<n;i++){
            vi b(m);
            for (int j = 0;j<m;j++){
                int c;
                cin >> c;
                if (c == 1){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
            a[i] = b;
        }
        int ans = min(n - s1.size(),m - s2.size());
        if (ans % 2) outn(s[0]);
        else outn(s[1]);
        
    }
    
}
 




