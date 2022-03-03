#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second

const int mod = 1e9 + 7;

void NumbersOnWhiteboard() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		priority_queue<int> q;
		int n;
		cin >> n;
		for (int i = n; i > 0; i--) {
			q.push(i);
		}
		vector<pii> ans;
		while (q.size() != 1) {
			double x = q.top();
			q.pop();
			double y = q.top();
			q.pop();
			double z = ceil((x + y) / 2.0);
			if (z == (x + y) / 2 or !q.size()) {
				q.push(z);
				ans.push_back({ x,y });
			}
			else {
				ans.push_back({ x, q.top() });
				z = ceil((x + q.top()) / 2.0);
				q.pop();
				q.push(z);
				q.push(y);
			}
		}
		cout << q.top() << '\n';
		for (pii p : ans) {
			cout << p.ff << ' ' << p.ss << '\n';
		}
	}
}