#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <climits>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define ll long long

using namespace std;

void getPrefixSum(vector<ll> a, vector<ll>& prefa) {
    prefa.push_back(0);
    for (ll i : a) {
        prefa.push_back(prefa.back() + i);
    }
}

int main() {
    sync;
    int n, k;
    cin >> n >> k;
    vector<ll> a, b, c;
    ll v;
    bool l1, l2;
    for (int i = 0; i < n; i++) {
        cin >> v >> l1 >> l2;
        if (l1 and l2) c.push_back(v);
        else if (l1) a.push_back(v);
        else if (l2) b.push_back(v);
    }
    sort(all(a)); sort(all(b)); sort(all(c));
    ll ans = INT_MAX;
    vector<ll> prefa, prefb, prefc;
    getPrefixSum(a, prefa);
    getPrefixSum(b, prefb);
    getPrefixSum(c, prefc);
    for (int i = 0; i < min(k + 1, (int)prefc.size()); i++) {
        if (k - i < prefa.size() and k - i < prefb.size()) {
            ans = min(ans, prefa[k-i] + prefb[k-i] + prefc[i]);
        }
    }
    if (ans == INT_MAX) cout << "-1\n";
    else cout << ans << '\n';
}
