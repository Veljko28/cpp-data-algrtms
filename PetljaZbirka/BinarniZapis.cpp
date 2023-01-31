#include <iostream>
#include <vector>

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;

int main() {
    sync;
    long long n;
    cin >> n;
    for (int i = 31; i >= 0; i--) {
        if (n & (1LL << i)) {
            cout << 1;
        }
        else cout << 0;
    }
}