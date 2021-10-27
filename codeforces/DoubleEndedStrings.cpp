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
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

int subStrLen1(string X, string Y, int m, int n)
{
    int LCSuff[21][21];
    int result = 0; 
 
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
           
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

void DoubleEndedStrings()
{
	sync;
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        read(a, b);
        int r = subStrLen1(a, b, a.length(), b.length());
        cout << (a.length() - r) + (b.length() - r) << '\n';
    }
}





