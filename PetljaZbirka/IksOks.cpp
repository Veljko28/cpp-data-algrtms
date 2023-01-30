#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    vector<vector<int>> ans = { {},
                       {0,1,2,3},
                       {0,4,5,6},
                       {0,7,8,9} };
    int idx1 = x / 100 + (x % 100 ? 1 : 0);
    int idx2 = y / 100 + (y % 100 ? 1 : 0);
    cout << ans[idx2][idx1] << '\n';
}
