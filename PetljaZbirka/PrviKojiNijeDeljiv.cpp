#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long& i : a) cin >> i;
    int q;
    while (cin >> q) {
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (a[mid] % q == 0) {
                l = mid+1;
            }
            else r = mid-1;
        }
        cout << l << '\n';
    }
}