#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'


void MaximumControl(){
    int n, ans = 0;
    cin >> n;
    vi a(n+1,0), b(n+1,0);
    for (int i =0;i<n-1;i++){
        int c,d;
        cin >> c >> d;
        a[c]++; b[d]++;
    }
    for (int i = 1;i<n+1;i++){
        if (a[i] + b[i] == 1) ans++;
    }
    outn(ans);
}
