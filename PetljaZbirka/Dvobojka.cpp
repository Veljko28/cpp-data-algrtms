#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a,b;
    for (int i =0,j;i<n;i++){
        cin >> j;
        if (j%2) b.push_back(j);
        else a.push_back(j);
    }
    for (int i : a) cout << i << ' ';
    for (int i : b) cout << i << ' ';
    cout << '\n';
}