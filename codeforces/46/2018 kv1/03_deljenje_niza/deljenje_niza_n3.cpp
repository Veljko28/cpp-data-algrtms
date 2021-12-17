#include<bits/stdc++.h>
#define MAXN 8005
using namespace std;
//40p
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
				s=0;
				for(int i=0;i<n && 2*s<=total_sum-cs;i++) {
					if(i==l) i=r;
					else {
						s+=a[i];
						if(s*2==total_sum-cs) {
							printf("%d %d\n",l+1,r+1);
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
