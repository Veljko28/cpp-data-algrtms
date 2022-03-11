#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define prv(a) for (auto i : a) cout << i << ' '; cout << '\n';

const int MAXN = 1e5 + 5;

int n;
int a_score[MAXN];
int b_score[MAXN];

int sum_a, sum_b;

void init() {
	n = sum_a = sum_b = 0;
	memset(a_score, 0, sizeof(a_score));
	memset(b_score, 0, sizeof(b_score));
}

int calculateScoreOfA(int extra) {

	int score = sum_a + (extra * 100);

	extra += n; // total stages

	int skip = extra / 4;

	for (int i = 0;i<skip;i++){
		score -= a_score[i];
	}

	return score;
}

int calculateScoreOfB(int extra) {
	int score = sum_b;
	extra += n; 
	int skip = extra / 4 - (extra - n);

	for (int i =0;i<skip;i++){
		score -= b_score[i];
	}

	return score;
}

void solve() {

	init();

	cin >> n;

	for (int i =0;i<n;i++){
		cin >> a_score[i];
		sum_a += a_score[i];
	}

    for (int i=0;i<n;i++){
		cin >> b_score[i];
		sum_b += b_score[i];
	}

	sort(a_score, a_score + n);
	sort(b_score, b_score + n);

	int lo = 0, hi = n, extra = -1;

	while (lo <= hi) {

		int mid = lo + (hi - lo) / 2;

		int a_curr_score = calculateScoreOfA(mid);
		int b_curr_score = calculateScoreOfB(mid);

		if (a_curr_score >= b_curr_score) {
			extra = mid;
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}

	cout << extra;
}

void Pursuit() {

	sync;

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
		cout << '\n';
	}

	return 0;
}