#include <iostream>
#include <vector>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5+1;

// Floyd Warshall Agorithm for Shortest Path
// Time Complexity O(n^3)
int main(){
    sync;
    vector<pair<int,int>> adj[N];
    int n;
    cin >> n;
    for (int i =0;i<n;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    int dist[N][N];
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            if (i == j) dist[i][j] = 0;
            else if (adj[i][j]) dist[i][j] = adj[i][j];
            else dist[i][j] = INT_MAX;
        }
    }


    for (int k = 1;k<=n;k++){
        for (int i =1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
}