#include<bits/stdc++.h>
#define MAXN 8005
using namespace std;
//15p
int n;
int a[MAXN];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	long long total_sum=0,s=0,cs=0;
	for(int i=0;i<n;i++) total_sum+=a[i];
	for(int l=0;l<n;l++) {
		for(int r=l;r<n;r++) {
			if(l!=0 || r!=n-1) {
				cs=0;
				for(int i=l;i<=r;i++) cs+=a[i];
				for(int i=0;i<n;i++) {
					s=0;
					if(i<l || i>r) {
						for(int j=0;j<=i;j++) {
							if(j<l || j>r) s+=a[j];
						}
						if(total_sum-cs==2*s) {
							printf("%d %d",l+1,r+1);
							return 0;
						}
					}
				}
			}
		}
	}
	printf("-1");
	return 0;
}
