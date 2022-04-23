#include <iostream>
#include <vector>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
    sync;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;

    int ans = 0, s = 0;
    for (int i=0;i<n;i++){
        s = max(a[i],s+a[i]);
        ans = max(ans,s);
    }
    cout << ans << "\n";
}