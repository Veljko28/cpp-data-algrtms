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
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
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

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}


void TavasAndNafas()
{
    sync;
    string o[10] = { "zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight", "nine" };
    string d[10] = { "ten", "eleven", "twelve", "thirteen", "fourteen",
                    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    string t[10] = { "", "", "twenty", "thirty", "forty",
                    "fifty", "sixty", "seventy", "eighty", "ninety" };
    int n;
    cin >> n;

    if (n < 10)
        cout << o[n] << endl;
    else if (n >= 10 and n < 20)
        cout << d[n - 10] << endl;
    else if (n % 10 == 0)
        cout << t[n / 10] << endl;
    else
        cout << t[n / 10] << "-" << o[n % 10] << endl;
}








