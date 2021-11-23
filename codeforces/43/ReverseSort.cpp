#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'


void ReverseSort(){
   int t;
   cin >> t;
   while (t--){
       int n;
       string s;
       cin >> n >> s;
       if (is_sorted(s.begin(),s.end())){
           cout << 0 << '\n';
           continue;
       }
       string a = s;
       sort(a.begin(),a.end());
       vector<int> b;
       cout << 1 << '\n';
       for (int i=0;i<s.length();i++){
           if (a[i] != s[i]) b.push_back(i+1);
       }
       cout << b.size() << ' ';
       for (int i =0;i<b.size();i++){
           if (i + 1 == b.size()){
               cout << b[i] << '\n';
           }
           else cout << b[i] << ' ';
       }
   }
}
