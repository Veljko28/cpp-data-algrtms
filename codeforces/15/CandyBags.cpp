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

void CandyBags()
{
	sync;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << i + 1;
		for (int j = 1; j < n; j++) {
			cout << " " << n * j + (j + i) % n + 1;
		}
		cout << '\n';
	}
	return;

}




