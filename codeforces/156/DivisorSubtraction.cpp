#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

const int mod = 1e9 + 7;

vector<bool> Eratothenes(ll n) {
	vector<bool> primes(n + 1, true);
	primes[0] = primes[1] = false;
	for (ll i = 2; i * i <= n; i++) {
		if (primes[i]) {
			for (ll j = i * i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	return primes;
}

bool isPrime(ll a){
    if (a < 2) return 0;
    if (a == 2) return 1;
    for (int i = 2;i*i<=a;i++){
        if (a%i==0) return 0;
    }
    return 1;
}

void DivisorSubtraction() {
	sync;
	ll n;
	cin >> n;
	if (n%2){
	    bool ok = false;
	    for (ll i =2;i*i<=n;i++){
	        if (n%i==0){
	            n -= i;
	            ok = true;
	            break;
	        }
	    }
	    if (ok) cout << 1+ n/2;
	    else cout << 1;
	}
	else cout << n/2;
}