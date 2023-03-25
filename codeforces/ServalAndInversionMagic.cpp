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
#include <sstream>
#include <ostream>
#include <assert.h>
#include <cstdint>
#include <climits>
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
#define min_heap_pq priority_queue<int,vector<int>,greater<int>>
using namespace std;

bool isPalindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] == s[s.length()-i-1]) return 0;
    }
    return 1;
}

bool swp(string s, int a, int b) {
    while (a <= b) {
        if (s[a] == '1') s[a] == '0';
        else s[a] == '1';
        a++;
    }

    return isPalindrome(s);
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int a = 0;
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            if (a == 2) {
                cout << "No\n";
                return;
            }
            a = 1;
        }
        else if (a) a = 2;
    }
    cout << "Yes\n";
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
