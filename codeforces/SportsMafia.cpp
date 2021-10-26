#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 200000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void SportsMafia()
{
	sync;
	ll n, k;
	ll sum = 0;
	int i = 1, j = 0;
	read(n, k);
	while (true) {
		if (sum - (n - j) == k) {
			cout << n - j << '\n';
			return;
		}
		sum += i;
		i++;
		j++;
	}
}




