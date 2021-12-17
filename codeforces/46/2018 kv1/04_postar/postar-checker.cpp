#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

	ifstream ouf(argv[1]);
	ifstream sof(argv[2]);
	ifstream inf(argv[3]);

	double a, b;

	sof >> b;
	ouf >> a;

	return abs(a-b) / max((double)1, b) <= 1e-6 ? 0 : -1;
}
