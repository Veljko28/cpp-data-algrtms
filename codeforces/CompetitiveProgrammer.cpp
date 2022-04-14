#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <climits>
#include <queue>
#include <cmath>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define all(a) (a).begin(), (a).end()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ff first
#define ss second
#define prv(a) for (int i =0;i<a.size();i++) { if (i+1==a.size()){ cout << a[i] << '\n'; } cout << a[i] << ' '; }

using namespace std;

void zad1(){
    	cout << "********** ULAZ  **********\n";
	int n;
	cout << "Unesite broj elemenata niza N\n";
	cin >> n;
	while (n < 5 or n > 50) {
		cout << "Broj nije u opsegu\n";
		cout << "Unesite broj elemenata niza N\n";
		cin >> n;
	}
	vi a(n);
	cout << "Unesite elemente niza\n";
	vifor(a);
	cout << "Unesite celobrojnu vrednost x\n";
	int x;
	cin >> x;
	while (x < -50 or x > 50) {
		cout << "Broj nije u opsegu\n";
		cout << "Unesite celobrojnu vrednost x\n";
		cin >> x;
	}
	cout << "Unesite broj izmena y\n";
	int y;
	cin >> y;
	while (y < 1 or y > 10) {
		cout << "Broj nije u opsegu\n";
		cout << "Unesite broj izmena y\n";
		cin >> y;
	}
	cout << "Unesite broj rotacija z\n";
	int z;
	cin >> z;
	while (z > y) {
		cout << "Broj nije u opsegu\n";
		cout << "Unesite broj rotacija z\n";
		cin >> z;
	}
	system("CLS");
	vi b = a;
	b.push_back(x);
	sort(all(b));
	cout << "********  odgovor 1  ********\n";
	for (int i : b) {
		cout << i << ' ';
	}
	cout << '\n';
	cout << "********  odgovor 2  ********\n";
	vi c = a;
	int i = 0;
	while (i < c.size()) {
		int s = accumulate(all(c),0);
		if (c[i]%2 and i % 2 == 0) {
			int h = c[i] ^ i;
			s += h - c[i];
			int diff = INT_MAX, idx = INT_MAX;
			for (int j = 0; j < c.size(); j++) {
				if (abs((s / n) - c[j]) < diff) {
					diff = abs((s / n) - c[j]);
					idx = j;
				}
			}
			c.erase(c.begin() + idx);
		}
		i++;
	}
	for (int i : c) {
		cout << i << ' ';
	}
	cout << '\n';
	cout << "********  odgovor 3  ********\n";
	map<int, int> d;
	for (int i = 0; i < n; i++) {
		if ((a[i] >= 0 and a[i] <= 9) or (a[i] >= -9 and a[i] < 0)) {
			d[abs(a[i])]++;
		}
		else {
			string s = to_string(a[i]);
			int mn = INT_MAX;
			for (char c : s) {
				if (isdigit(c)) {
					mn = min(c-'0', mn);
				}
			}
			d[mn]++;
		}
		if (i == 0 and d[0]) {
			d[1] = 1;
			d[0] = 0;
		}
	}
	string ans;
	for (int i = 0; i < 10; i++) {
		int t = d[i] / 2;
		ans = string(t, d[i] + '0') + ans + string(t, d[i] + '0');
	}
	if (ans.length()) {
		for (int i = 0; i < 10; i++) {
			if (d[i]) {
				ans.insert(ans.begin()+ans.length() / 2, d[i] + '0');
				break;
			}
		}
		for (char c : ans) {
			cout << c << ' ';
		}
		cout << '\n';
	}
	else {
		cout << "Nije moguce napraviti palindrom za dati broj izmena\n";
	}
}


bool divCheck(int s){
    return s%3==0 and s%2==0 and s%10==0;
}

void CompetitiveProgrammer() {
	sync;
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        bool has_z = 0;
        int sum = 0, e = 0;
        for (char c : s){
            sum += c-'0';
            e += ((c-'0')%2==0);
            if (c == '0') has_z = 1; 
        }
        if ((sum%3==0 and e-1 and has_z) or (sum == 0)) cout << "red" << '\n';
        else cout << "cyan" << '\n';
    }
}