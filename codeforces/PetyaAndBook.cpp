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


void PetyaAndBook()
{
	sync;
	int n;
	cin >> n;
	vector<int> v(7);
	for (int& i : v) cin >> i;
	int i = 0, sum = 0;
	while (true)
	{
		if (i == 7) i = 0;
		sum += v[i++];
		if (sum >= n) {
			cout << i << '\n';
			return;
		}
	}
}

