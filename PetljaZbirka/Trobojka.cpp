#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    int x,y;
    cin >> x >> y;
    vector<int> b,c,d;
    for (int i =0;i<n;i++){
        if (a[i] < x) b.push_back(a[i]);
        else if (a[i] >= x and a[i] <= y) c.push_back(a[i]);
        else d.push_back(a[i]);
    }
    for (int i : b) cout << i << ' ';
    cout << '\n';
    for (int i : c) cout << i << ' '; 
    cout << '\n';
    for (int i : d) cout << i << ' ';
}