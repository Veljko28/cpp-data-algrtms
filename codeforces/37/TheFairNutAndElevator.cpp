#include<bits/stdc++.h>
using namespace std;


void TheFairNutAndElevator(){
    int n;
    long long ans=0;
    cin>>n;
    int a;
    for(int i=0 ,j=0; i<n ;j+=2, i++){
        cin>>a;
        ans+=a*(j+j);
    }
    cout<<ans<<'\n';
}