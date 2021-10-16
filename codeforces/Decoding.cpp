#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long




void Decoding()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int t = 1;
	if (n % 2 == 0) t = 0;
	vector<char> s(n);
	vector<char> ans;
	for (char& c : s) cin >> c;
	for (int i = 0; i < n; i++) {
		if (t == 0) {
			t++;
			ans.insert(ans.begin(), s[i]);
		}
		else {
			t--;
			ans.push_back(s[i]);
		}
	}

	for (char c : ans) cout << c;
}

