#include <iostream>
#include <vector>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

vector<int> coins = {1,2,5};
vector<int> dp;


int solve(int x){
    if (x < 0) return INT_MIN;
    if (x == 0) return 0;
    if (dp[x]) return dp[x];
    int ans = INT_MAX;
    for (int c : coins){
        ans = min(ans,solve(x-c)+1);
    }
    return dp[x] = ans;
}

void solveIterative(int x){
    vector<int> values(x,INT_MAX);
    values[0] = 0;
    for (int i = 1;i<=x;i++){
        for (int c : coins){
            if (x-c >= 0) values[i] = min(values[i], values[x-c]+1);
        }
    }
}


int main(){
    sync;
    int n;
    cin >> n;
    dp = vector<int>(n,0);
    cout << solve(n) << '\n';
}