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

void CanvasFrames(){
    int n;
    cin >> n;
    vi a(101,0);
    int c = 0;
    for (int i =0;i<n;i++){
        int b;
        cin >> b;
        a[b]++;
        if (a[b] == 2){
            c++;
            a[b] = 0;
        }
    }
    if (c % 2) c--;
    outn(c/2);
}