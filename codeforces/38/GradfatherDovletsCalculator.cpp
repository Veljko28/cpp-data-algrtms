#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i;

int getNums(vi c, int a){
    int f = 0;
    string b = to_string(a);
    for (char d : b){
        f += c[d-'0'];
    }
    return f;
}

void GrandFatherDovletsCalculator(){
    vi c = {6,2,5,5,4,5,6,3,7,6};
    ll a,b, s = 0;
    cin >> a >> b;
    while (a <= b){
        if (a < 10){
            s += c[a];
        }
        else s += getNums(c,a);
        a++;
    }
    outn(s);
}