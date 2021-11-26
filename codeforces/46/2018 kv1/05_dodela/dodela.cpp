#include <bits/stdc++.h>
using namespace std;

const int MAX_LOG = 20;
const int MAX_NODES = 10000000;
const int CRITICAL_NODES = 5000000;

bool odluka() {
	static unsigned x = 0;
	x += 1111111111;
	return x < 0x80000000u;
}

struct cvor {
	int l, r, s;
} a[MAX_NODES]; int z; // a[0] = {0, 0, 0}

int kopija(int c) {
	a[++z] = a[c];
	return z;
}

void fixs(int x) {
	if (a[x].l == -1)
		a[x].s = 1;
	else
		a[x].s = a[a[x].l].s + a[a[x].r].s;
}

pair<int, int> seci(int x, int s) {
	if (!x)
		return {0, 0};
	if (!s)
		return {0, x};
	if (a[x].l == -1)
		return {s ? x : 0, s ? 0 : x};
	int y = kopija(x), p = a[a[x].l].s;
	if (s <= p) {
		auto w = seci(a[y].l, s);
		a[y].l = w.second;
		fixs(y);
		return {w.first, y};
	} else {
		auto w = seci(a[y].r, s - p);
		a[y].r = w.first;
		fixs(y);
		return {y, w.second};
	}
}

int spoji(int x, int y) {
	if (!x) return y;
	if (!y) return x;
	if (a[x].l == -1 && a[y].l == -1) {
		int z = kopija(0);
		a[z] = {x, y, 2};
		return z;
	}
	bool levo = odluka();
	if (a[x].l == -1)
		levo = false;
	else if (a[y].l == -1)
		levo = true;
	if (levo) {
		int z = kopija(x);
		a[z].r = spoji(a[z].r, y);
		fixs(z);
		return z;
	} else {
		int z = kopija(y);
		a[z].l = spoji(x, a[z].l);
		fixs(z);
		return z;
	}
}

int trazi(int x, int s) {
	if (a[x].l == -1)
		return a[x].r;
	int p = a[a[x].l].s;
	if (s < p)
		return trazi(a[x].l, s);
	else
		return trazi(a[x].r, s-p);	
}

int spoji_spolja(int x, int y) {
	int z = kopija(0);
	a[z] = {x, y, a[x].s + a[y].s};
	return z;
}

int dupliraj(int x) {
	return spoji_spolja(x, x);
}

int pomnozi(int x, int k) {
	if (!k) return 0;
	int y[MAX_LOG];
	y[0] = x;
	for (int i=1; i<MAX_LOG; i++)
		y[i] = dupliraj(y[i-1]);
	int z = -2;
	for (int i=0; i<MAX_LOG; i++) {
		if (k & (1 << i)) {
			if (z == -2)
				z = y[i];
			else
				z = spoji_spolja(z, y[i]);
		}
	}
	return z;
}

int napravi(int l, int r, basic_string<int>& v) {
	if (l == r) {
		int z = kopija(0);
		a[z] = {-1, v[l], 1};
		return z;
	} else {
		int m = (l+r) >> 1;
		return spoji_spolja(napravi(l, m, v), napravi(m+1, r, v));
	}
}

void procitaj_rek(int x, basic_string<int>& v) {
	if (!x) return;
	if (a[x].l == -1) {
		v += a[x].r;
		return;
	}
	procitaj_rek(a[x].l, v);
	procitaj_rek(a[x].r, v);
}

void stampaj(int x) {
	basic_string<int> v;
	procitaj_rek(x, v);
	for (int x : v)
		cerr << x << ' ';
	cerr << '\n';
}

basic_string<int> seci(int x, basic_string<int> v) {
	basic_string<int> r;
	for (int s : v) {
		auto p = seci(x, s);
		r += p.first;
		x = p.second;
	}
	return r;
}

int spoji(basic_string<int> v) {
	int x = 0;
	for (int y : v)
		x = spoji(x, y);
	return x;
}

int osvezi(int x) {
	basic_string<int> v;
	procitaj_rek(x, v);
	memset(a, 0, (z + 1) * sizeof(cvor));
	z = 0;
	return napravi(0, v.size()-1, v);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin >> n >> q;
	int x;
	{
		basic_string<int> a(n, 0);
		iota(a.begin(), a.end(), 1);
		x = napravi(0, n-1, a);
	}
	for (int _q=0; _q < q; _q++) {
		int t;
		cin >> t;
		if (t == 1) {
			int u, v, l;
			cin >> u >> v >> l;
			u--, v--;
			if (u < v) {
				if (v-u >= l) {
					auto p = seci(x, {u, l, v-u-l, l, n-v-l});
					x = spoji({p[0], p[3], p[2], p[3], p[4]});
				} else {
					auto p = seci(x, {u, v-u, u+l-v, v-u, n-v-l});
					x = spoji({p[0], p[2], p[3], p[3], p[4]});
				}
			} else if (u > v) {
				if (u-v >= l) {
					auto p = seci(x, {v, l, u-v-l, l, n-u-l});
					x = spoji({p[0], p[1], p[2], p[1], p[4]});
				} else {
					int kol = l / (u - v);
					int ost = l % (u - v);
					auto p = seci(x, {v, ost, u-v-ost, l, n-u-l});
					int ponovljeno = pomnozi(spoji(p[1], p[2]), 1 + kol);
					x = spoji({p[0], ponovljeno, p[2], p[4]});
				}
			}
		} else {
			int u;
			cin >> u;
			cout << trazi(x, u-1) << '\n';
		}
		if (z > CRITICAL_NODES)
			x = osvezi(x);
	}
}