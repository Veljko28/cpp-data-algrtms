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


void DisturbedPeople()
{
	sync;
    int n;
    cin >> n;
    vector<int> a(n);
    int s=0;
    for (int& i : a) cin >> i;
    for (int i = 1;i<n-1;i++){
        if (a[i] == 0 and a[i-1] == 1 and a[i+1] == 1) {
            s++;
            a[i+1]= 0;
        }
    }
    cout << s << '\n';
}





