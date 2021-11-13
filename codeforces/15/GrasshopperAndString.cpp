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
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 200000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

bool isVowel2(char ch)
{
	ch = tolower(ch);
	if (ch != 'a' && ch != 'e' && ch != 'i'
		&& ch != 'o' && ch != 'u' && ch != 'y')
		return false;

	return true;
}

void GrasshopperAndString()
{
	sync;
	string s;
	cin >> s;
	int ans = 1, m = 1;
	for (int i = 0; i < s.length(); i++)
	{
		if (!isVowel2(s[i])) {
			m++;
		}
		else m = 1;
		ans = max(m, ans);
	}
	cout << ans << '\n';
}




