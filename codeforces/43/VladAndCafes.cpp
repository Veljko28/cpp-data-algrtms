#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'


void VladAndCafes(){
    int n;
    cin >> n;
    map<int,int> a;
    for (int i =1;i<=n;i++){
        int b;
        cin >> b;
        if (!a.count(b)){
            a.insert({b,i});
        }
        else a[b] = i;
    }
    int m = INT_MAX, c = 0;
    for (auto x : a){
        if (m > x.second) {
            m = x.second;
            c = x.first;
        }
    }
    outn(c);
}
