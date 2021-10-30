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
#include <unordered_map>
#include <deque>
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void PermutationMinimalization()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		deque<int> a;
		for (int i = 0; i < n; i++) {
			int b;
			cin >> b;
			if (a.empty() || b < a[0]) {
				a.push_front(b);
			}
			else a.push_back(b);
		}
		for (int b : a) {
			cout << b << " ";
		}
		cout << endl;
	}
}





