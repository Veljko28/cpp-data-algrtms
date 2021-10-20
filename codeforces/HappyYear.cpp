#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void HappyYear()
{
	sync;
	string n;
	cin >> n;
	ll a = (n[0] - 47) * pow(10, n.length() - 1);
	cout << a - stoll(n) << '\n';
}
