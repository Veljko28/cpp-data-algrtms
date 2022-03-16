#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define sync ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define vi vector<int>
#define vifor(a) for(int& i : a) cin >> i
#define pii pair<int,int>


using namespace std;

void Takmicar(){
    sync;
    int n;
    cin >> n;
    ll s = 0;
    for (int i =0,j;i<n;i++){
        cin >> j;
        s += j;
    }
    int q, c = 0;
    cin >> q;
    while (q--){
        int t;
        cin >> t;
        if (t == 2) c++;
        else {
            int l,r,x;
            cin >> l >> r >> x;
            if (x > 0){
                s += x*(r-l+1);
            }
        }
    }
    cout << s*c << '\n';
}