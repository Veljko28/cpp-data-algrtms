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


void ExercisingWalk(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c,d,x,y,x1,y1,x2,y2,xx,yy;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        xx=x,yy=y;
        x+=-a+b, y+=-c+d;
        if (x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
 




