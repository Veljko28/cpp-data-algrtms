#include<bits/stdc++.h>
#define MAXN 8005
using namespace std;
//65p
struct kt {
	long long vl;
	int br;
};
int n;
int a[MAXN];
bool operator <(kt x,kt y) {
	return x.vl<y.vl;
}
bool operator >(kt x,kt y) {
	return x.vl>y.vl;
}
bool operator <=(kt x,kt y) {
	return x.vl<=y.vl;
}
bool operator >=(kt x,kt y) {
	return x.vl>=y.vl;
}
bool operator ==(kt x,kt y) {
	return x.vl==y.vl;
}
bool operator !=(kt x,kt y) {
	return x.vl!=y.vl;
}
set<kt> mp;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	long long total_sum=0,s=0,cs=0;
	for(int i=0;i<n;i++) total_sum+=a[i];
	for(int l=0;l<n;l++) {
		s+=a[l];
		cs=s;
		mp.clear();
		mp.insert({s,l+1});
		for(int i=l+1;i<n;i++) {
			cs+=a[i];
			if(mp.find({2*cs-total_sum-a[l]+s,0})!=mp.end()) { 
				printf("%d %d",l+1,(*mp.find({2*cs-total_sum-a[l]+s,0})).br);
				return 0;
			}
			mp.insert({cs,i+1});
		}
	}
	s=0;
	mp.clear();
	cs=0;
	reverse(a,a+n);
	for(int l=0;l<n;l++) {
		s+=a[l];
		cs=s;
		mp.clear();
		mp.insert({s,l+1});
		for(int i=l+1;i<n;i++) {
			cs+=a[i];
			if(mp.find({2*cs-total_sum-a[l]+s,0})!=mp.end()) {
				printf("%d %d",n-(*mp.find({2*cs-total_sum-a[l]+s,0})).br+1,n-l);
				return 0;
			}
			mp.insert({cs,i+1});
		}
	}
	printf("-1");
	return 0;
}
