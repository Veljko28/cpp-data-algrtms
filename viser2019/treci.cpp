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
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define pi 3.1415926535897932384626429750288419716939937510
#define pf   printf
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define minus pf("-1\n")
#define imp pf("impossible\n")
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vb vector<bool>
#define vll vector<ll>
#define si set<int>
#define sc set<char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pci pair<char,int>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define Forr(n) for (int i=n-1;i>=0;i--)
#define vifor(v) for (int& i : v) cin >> i;
#define vbfor(v) for (bool& i : v) cin >> i;
#define ovifor(v, n) for (int i =1;i<=n;i++) cin >> v[i]; 
#define vllfor(v) for (ll& i : v) cin >> i;
#define vpiifor(v,n) for (int i = 0,j;i<n;i++) { cin >> j; a[i] = {j,i}; }
#define vsfor(v) for (string& s : v) cin >> s;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define outn(a) cout << a << '\n'
#define out(a) cout << a << " "
#define ff first
#define ss second
#define nmg pf("nemoguce\n");
#define mg pf("moguce\n");
#define msi multiset<int> 
#define mss multiset<string>
#define min_heap_pq priority_queue<int,vi,greater<int>>
#define bit_count(x) __builtin_popcount(x);
using namespace std;

template<typename T>
void prv(vector<T> a) {
	for (int i = 0; i < a.size(); i++) {
		 cout << a[i] << ' ';
	}
}

template<typename T, typename N>
void prvp(vector<pair<T, N>> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i].first << " " << a[i].second << '\n';
	}
}

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return (a * b) / gcd(a, b);
}

ifstream read(string s) {
	ifstream file;
	file.open(s);
	if (file.fail()) {
		outn("Failed to Open Input File !");
		exit(1);
	}
	return file;
}

ofstream write(string s) {
	ofstream file;
	file.open(s);
	if (file.fail()) {
		outn("Failed to Open Output File !");
		exit(1);
	}
	return file;
}

bool customSort(int a, int b) {
	return abs(a) > abs(b);
}

vector<bool> Eratothenes(ll n) {
	vector<bool> primes(n + 1, true);
	primes[0] = primes[1] = false;
	for (ll i = 2; i * i <= n; i++) {
		if (primes[i]) {
			for (ll j = i * i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	return primes;
}

int SumOfDigits(ll n) {
	int ans = 0;
	while (n) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

bool isPalindrome(string s) {
	string t = s;
	reverse(all(t));
	return t == s;
}

bool isPrime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}


int odg = 1;
void sledOdg() {
	cout << "*****  odgovor "+to_string(odg++)+"  *****\n\n";
}


void printVec(vector<vector<char>> v) {
	cout << " ";
	for (int i = 1; i < v[0].size(); i++) {
		cout << " " << i;
	}
	cout << '\n';
	for (int i = 1; i < v.size(); i++) {
		cout << i << ' ';
		for (int j = 1; j < v[i].size(); j++) {
			cout << v[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}


vs split(string s) {
	vs ans;
	string a;
	for (char c : s) {
		if (c == ' ') {
			ans.push_back(a);
			a = "";
		}
		else a += c;
	}
	if (a.length()) ans.push_back(a);
	return ans;
}

int n,m;
vector<vector<char>> v;
map<char,set<char>> overlap;

void diagonalLeft(char c, int i,int j){
    int t = i,t2=j;
    while (true){
        t++,t2--;
        if(t>m or t2<1){
            break;
        }
        if (v[t][t2] == '=') v[t][t2] = c;
        else {
            overlap[v[t][t2]].insert(c);
            overlap[c].insert(v[t][t2]);
            v[t][t2] = '@';
        }
    }
    t = i,t2=j;
    while (true){
        t--,t2++;
        if(t<1 or t2>n){
            break;
        }
        if (v[t][t2] == '=') v[t][t2] = c;
        else {
            overlap[v[t][t2]].insert(c);
            overlap[c].insert(v[t][t2]);
            v[t][t2] = '@';
        }
    }
}

void diagonalRight(char c, int i,int j){
    int t = i,t2=j;
    while (true){
        t++,t2++;
        if(t>m or t2>n){
            break;
        }
        if (v[t][t2] == '=') v[t][t2] = c;
        else {
            overlap[v[t][t2]].insert(c);
            overlap[c].insert(v[t][t2]);
            v[t][t2] = '@';
        }
    }
    t = i,t2=j;
    while (true){
        t--,t2--;
        if(t<1 or t2<1){
            break;
        }
        if (v[t][t2] == '=') v[t][t2] = c;
        else {
            overlap[v[t][t2]].insert(c);
            overlap[c].insert(v[t][t2]);
            v[t][t2] = '@';
        }
    }
}



void plusOper(char c, int i, int j){
    for (int l=1;l<=n;l++){
        if (l == j) continue;
        if (v[i][l] == '=') v[i][l] = c;
        else {
            overlap[v[i][l]].insert(c);
            overlap[c].insert(v[i][l]);
            v[i][l] = '@';
        }
    }
    for (int l=1;l<=m;l++){
        if (l == i) continue;
        if (v[l][j] == '=') v[l][j] = c;
        else {
            overlap[v[l][j]].insert(c);
            overlap[c].insert(v[l][j]);
            v[l][j] = '@';
        }
    }
}

int cetiri(pair<pair<char,char>,pii> p){
   
}


void treci() {
	sync;
    cout << "********** ULAZ  **********\n\n\n";
	string inp;
	getline(cin, inp);
	vs t = split(inp);
	int a = stoi(t[0]);
	n = a / 10, m = a % 10;
	v = vector<vector<char>>(m+1, vector<char>(n+1, '='));
	vector<pair<pair<char, char>, pii>> pieces;
	for (int i =1;i<t.size();i++){
		string s = t[i];
		v[s[2] - '0'][s[1] - '0'] = s[0];
		pieces.push_back({ {s[0],s[3]}, {s[2] - '0',s[1] - '0'} });
	}
	system("CLS");
	cout << "*****  IZLAZI  *****\n\n\n";
	sledOdg();
	printVec(v);
	sledOdg();
    for (auto piece : pieces){
        piece.ff.ff = tolower(piece.ff.ff);
        switch(piece.ff.ss){
            case '+': 
                plusOper(piece.ff.ff,piece.ss.ff,piece.ss.ss);
                break;
            case '/':
                diagonalLeft(piece.ff.ff,piece.ss.ff,piece.ss.ss);
                break;
            case '\\': 
                diagonalRight(piece.ff.ff,piece.ss.ff,piece.ss.ss);
                break;
            case 'X':
                diagonalRight(piece.ff.ff,piece.ss.ff,piece.ss.ss);
                diagonalLeft(piece.ff.ff,piece.ss.ff,piece.ss.ss);
                break;
            default: break;
        }
    }
    printVec(v);
    sledOdg();
    for (char c : overlap[tolower(pieces[0].ff.ff)]){
        c = toupper(c);
        cout << c << ' ';
    }
    cout << "\n\n";
    sledOdg();
    cout << cetiri(pieces[3]) << "\n\n";
}
