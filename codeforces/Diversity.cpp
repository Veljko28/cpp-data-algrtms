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
#include <unordered_map>;
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


int main()
{
	sync;
    map<char,int> m;
    int k;
    string s;
    read(s,k);
    if (s.length() < k){
        cout << "impossible" << '\n';
        return 0;
    }
    for (char c : s) m[c]++;
    cout << max(0,k - (int)m.size()) << '\n';
}