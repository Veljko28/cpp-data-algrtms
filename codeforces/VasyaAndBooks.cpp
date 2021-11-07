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
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define vi vector<int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
using namespace std;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


const int N = int(2e5) + 9;


void VasyaAndBooks() {
	int n;
	int a[N];
	int b[N];
	bool u[N];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}

	int pos = 0;
	for (int i = 0; i < n; ++i) {
		int x = b[i];
		if (u[x]) {
			cout << 0 << " ";
			continue;
		}

		int cnt = 0;
		while (true) {
			++cnt;
			u[a[pos]] = true;
			if (a[pos] == x) break;
			++pos;
		}

		++pos;
		cout << cnt << " ";
	}

	cout << "";
	return;
}