#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i;


void VasyasCalendar(){
    int d, n;
    cin >> d >> n;
    vi a(n);
    vifor(a);
    int ans = 0;
    for (int i =0;i<n-1;i++){
        ans += d - a[i];
    }
    outn(ans);
}
