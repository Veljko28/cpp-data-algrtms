#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <stack>
using namespace std;
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int sum(string s) {
    int a = 0;
    for (char c : s){
        a += c-48;
    }
    return a;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (sum(s) == 0) {
        cout << -1 << '\n';
        return;
    }
    while (true){
        if ((s[s.length()-1]-48) % 2) break;
        else s.pop_back();
    }
    while (true){
        if (sum(s) % 2){
            bool ok = false;
            for (int i =0;i<s.length();i++){
                if ((s[i]-48) % 2 == 1 and i+1 != s.length()){
                    s.erase(s.begin()+i);
                    ok = true;
                }
            }
            if (!ok){
                cout << -1 << '\n';
                return;
            }
        }
        else break;
    }
    cout << s << '\n';
}

int main()
{
    sync;   
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}