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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void TheatreSquare()
{
	sync;
	ll n, m, a, N, M;
	read(n, m, a);
	N = n / a;
	M = m / a;
	if (n % a != 0) N++;
	if (m % a != 0) M++;
	cout << N * M << '\n';
}
