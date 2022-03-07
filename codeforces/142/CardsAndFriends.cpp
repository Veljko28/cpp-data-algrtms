#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

using namespace std;

void CardsAndFriends() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		int a,b,n;
		cin >> a >> b >> n;
		int ans = 1;
		while (a % 2 == 0) {
			a /= 2;
			ans *= 2;
		}
		while (b % 2 == 0) {
			b /= 2;
			ans *= 2;
		}
		if (ans >= n) yes;
		else no;
	}
}