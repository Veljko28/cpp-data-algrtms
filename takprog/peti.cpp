//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <numeric>
//#include <string>
//#include <cstring>
//#include <ctime>
//#include <set>
//#include <list>
//#include <sstream>
//#include <iomanip>
//#include <map>
//#include <stack>
//#include <unordered_map>
//#include <deque>
//#include <chrono>
//#include <fstream>
//#include <sstream>
//#include <assert.h>
//#define ui unsigned int
//#define ll long long
//#define ull unsigned long long
//#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//#define PI 3.14159265358979323846 
//#define pf   printf
//#define yes  pf("YES\n")
//#define no   pf("NO\n")
//#define minus pf("-1\n")
//#define imp pf("Impossible\n")
//#define vi vector<int>
//#define vs vector<string>
//#define vll vector<ll>
//#define si set<int>
//#define sc set<char>
//#define pii pair<int,int>
//#define pci pair<char,int>
//#define pb push_back
//#define For(n) for(int i=0;i<n;i++)
//#define Forr(n) for (int i=n-1;i>=0;i--)
//#define vifor(v) for (int& i : v) cin >> i;
//#define vllfor(v) for (ll& i : v) cin >> i;
//#define all(c) (c).begin(), (c).end()
//#define sz(x) (int)(x).size()
//#define outn(a) cout << a << '\n'
//#define out(a) cout << a << " "
//#define fi first
//#define se second
//#define nmg pf("nemoguce\n");
//#define mg pf("moguce\n");
//using namespace std;
//
//template<typename T>
//void prv(vector<T> a) {
//	for (int i = 0; i < a.size(); i++) {
//		if (i + 1 == a.size()) cout << a[i] << '\n';
//		else cout << a[i] << ' ';
//	}
//}
//
//template<typename T, typename N>
//void prvp(vector<pair<T, N>> a) {
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i].first << " " << a[i].second << '\n';
//	}
//}
//
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//int lcm(int a, int b) {
//	return (a * b) / gcd(a, b);
//}
//
//ifstream read(string s) {
//	ifstream file;
//	file.open(s);
//	if (file.fail()) {
//		outn("Failed to Open Input File !");
//		exit(1);
//	}
//	return file;
//}
//
//ofstream write(string s) {
//	ofstream file;
//	file.open(s);
//	if (file.fail()) {
//		outn("Failed to Open Output File !");
//		exit(1);
//	}
//	return file;
//}
//
//void dodaj_relaciju(vector<vi>& rel, int a, int b)
//{
//	rel[a].push_back(b);
//	rel[b].push_back(a);
//}
//
//int BFS(vector<vi> rel, int a, int b, int n)
//{
//	list<int> queue;
//
//	vector<bool> visited(n);
//	vi dist(n), pred(n);
//
//	for (int i = 0; i < n; i++) {
//		visited[i] = false;
//		dist[i] = INT_MAX;
//		pred[i] = -1;
//	}
//
//	visited[a] = true;
//	dist[a] = 0;
//	queue.push_back(a);
//
//	while (!queue.empty()) {
//		int u = queue.front();
//		queue.pop_front();
//		for (int i = 0; i < rel[u].size(); i++) {
//			if (visited[rel[u][i]] == false) {
//				visited[rel[u][i]] = true;
//				dist[rel[u][i]] = dist[u] + 1;
//				pred[rel[u][i]] = u;
//				queue.push_back(rel[u][i]);
//
//				if (rel[u][i] == b)
//					return dist[b];
//			}
//		}
//	}
//
//	return -1;
//}
//
//void swap_rel(vector<vi>& rel, int a, int b) {
//	vi temp = rel[a];
//	rel[a] = rel[b];
//	rel[b] = rel[a];
//}
//
//int main() {
//	sync;
//	int n;
//	cin >> n;
//	vi a(n);
//	vifor(a);
//	vi ans;
//	vector<vi> rel(n + 1);
//	for (vi& t : rel) {
//		t = {};
//	}
//	for (int i = 0; i < n - 1; i++) {
//		int c, d;
//		cin >> c >> d;
//		dodaj_relaciju(rel, c, d);
//	}
//	int q;
//	cin >> q;
//	while (q--) {
//		int o;
//		cin >> o;
//		if (o == 1) {
//			int f, g;
//			cin >> f >> g;
//			swap(a[f - 1], a[g - 1]);
//			swap_rel(rel, f, g);
//		}
//		else {
//			int l, r, x, mx = INT_MIN;
//			cin >> l >> r >> x;
//			for (int i = l - 1; i < r; i++) {
//				mx = max(mx, BFS(rel, x, a[i], n + 1));
//			}
//			ans.push_back(mx);
//		}
//	}
//	for (int i = 0; i < ans.size(); i++) {
//		outn(ans[i]);
//	}
//}
//
