#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

void solve2() {
   int n;
   cin >> n;
   vector<vector<int>> a(n);
   for (int i =0;i<n;i++){
       vector<int> b(n);
       for (int j=0;j<n;j++){
           if (i == j or (i+j) == n-1){
               b[j] = 1;
           }
           else b[j] = 0;
       }
       a[i] = b;
   }
   
   if (n % 2 != 0 ){
       a[(n/2)-1][n/2] = 1;
       a[n/2][(n/2)+1] = 1;
   }
   
   for (vector<int> c : a){
       for (int d : c){
           cout << d << ' ';
       }
       cout << '\n';
   }
    
}

void PrimeSquares()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}