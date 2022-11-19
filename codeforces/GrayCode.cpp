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
 
void solve() {
	int n;
	cin >> n;
	vector<string> ans;
	ans.push_back("0"); 
	ans.push_back("1");
	for (int i = 2; i < (1 << n); i <<= 1) {
		for (int j = i - 1; j >= 0; j--) {
			ans.push_back(ans[j]);
		}
		for (int j = 0; j < i; j++) {
			ans[j] = "0" + ans[j];
		}
		for (int j = i; j < 2 * i; j++) {
			ans[j] = "1" + ans[j];
		}
	}
	for (string s : ans) {
		cout << s << '\n';
	}
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}