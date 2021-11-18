#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int hlp(int a, int b){
    int s = 0;
    while(a){
        s += a % b;
        a /= b; 
    }
    return s;
}


void Numbers(){
    int n;
    cin >> n;
    int s =0, m = n-2;
    for (int i =2;i<=n-1;i++){
        s += hlp(n,i);
    }
    int g = gcd(s,m);
    s /= g;
    m /= g;
    cout << s << "/" << m << '\n';
}
