#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'


void DigitsSequence(){
    ll n;
    cin >> n;
    
    vector<int> v;
    stack<int> st;
    
    for (ll i =1;i<=5000;i++){
        if (i < 10) v.push_back(i);
        else {
            int a = i,d;
            while (a >= 10){
                d = a % 10;
                a = a / 10;
                st.push(d);
            }
            st.push(a);
            while(!st.empty()){
                d = st.top();
                st.pop();
                v.push_back(d);
            }
        }
    }
    cout << v[n-1] << '\n';
}
