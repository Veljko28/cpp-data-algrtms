#include <iostream>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long

// CSES Weird Algorithm

int main(){
    sync;
    ll n;
    cin >> n;
    while (n != 1){
        cout << n << ' ';
        n = n%2 ? 3*n+1 : n/2;
    }
    cout << n << '\n';
}