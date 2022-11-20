#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>
#include <cstring>
#include <ctime>
#include <set>
#include <list>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <queue>
#include <deque>
#include <chrono>
#include <fstream>
#include <sstream>
#include <ostream>
#include <assert.h>
#include <cstdint>
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
using namespace std;
 
void hanoi(int n, int start, int end) {
	if (n == 1) {
		cout << start << ' ' << end << '\n';
		return;
	}
	int other = 6 - (start + end);
	hanoi(n - 1, start, other);
	cout << start << ' ' << end << '\n';
	hanoi(n - 1, other, end);
}
 
void solve() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(n, 1, 3);
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}