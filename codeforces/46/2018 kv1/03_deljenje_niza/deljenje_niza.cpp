#include<bits/stdc++.h>
#define MAXN 8005
using namespace std;
//100p
int n;
int a[MAXN];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	long long total_sum=0,s=0;
	for(int i=0;i<n;i++) total_sum+=a[i];
	for(int i=0;i<n;i++) {
		s+=a[i];
		long long cs=0;
		int l=i+1,r=i+1;
		cs=a[i+1];
		while(l<n && r<n) {
			while(r<n && (r<l || total_sum-cs-s>s)) {
				r++;
				cs+=a[r];
			}
			if(total_sum-cs-s==s) {
				printf("%d %d",l+1,r+1);
				return 0;
			}
			cs-=a[l];
			l++;
		}
	}
	s=0;
	reverse(a,a+n);
	for(int i=0;i<n;i++) {
		s+=a[i];
		long long cs=0;
		int l=i+1,r=i+1;
		cs=a[i+1];
		while(l<n && r<n) {
			while(r<n && (r<l || total_sum-cs-s>s)) {
				r++;
				cs+=a[r];
			}
			if(total_sum-cs-s==s) {
				printf("%d %d",n-r,n-l);
				return 0;
			}
			cs-=a[l];
			l++;
		}
	}
	printf("-1");
	return 0;
}
