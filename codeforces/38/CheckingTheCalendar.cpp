#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'


void CheckingTheCalendar(){
   vector<string> b = {"0","monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
   string s, s2;
   cin >> s >> s2;
   auto it = find(b.begin(),b.end(), s), it2 = find(b.begin(),b.end(),s2);
   int c = it - b.begin(), d = it2 - b.begin();
   int n = d - c;
   if (n<0) n += 7;
   if (n == 0 or n == 2 or n == 3) yes;
   else no;
}
