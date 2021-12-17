#include<bits/stdc++.h>
#pragma GCC optimize ("O4")
#pragma GCC target ("sse4")
using namespace std;
//40p
int n,m;
int a[2000000];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) a[i]=i+1;
	int u,v,l,o;
	while(m--) {
		scanf("%d",&o);
		if(o==1) {
			scanf("%d %d %d",&u,&v,&l);
			for(int i=0;i<l;i++) a[u-1+i]=a[v-1+i];
		}
		else {
			scanf("%d",&u);
			printf("%d\n",a[u-1]);
		}
	}
	return 0;
}