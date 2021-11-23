#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define outn(a) cout << a << '\n'
#define vifor(a) for (int& i : a) cin >> i
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'


int main(){
   int h1,h2,m1,m2,t1,t2,d,ans;

   while (scanf("%d:%d\n%d:%d",&h1,&m1,&h2,&m2) != EOF)
   {
        t1 = h1*60+m1;
        t2 = h2*60+m2;
        d = (t2-t1)/2;
        ans = t1+d;
        printf("%02d:%02d\n",ans/60,ans%60);
   }
}
