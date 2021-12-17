#include<bits/stdc++.h>
using namespace std;
//100p
int main()
{
	int n;
	scanf("%d",&n);
	double k,c;
	double m;
	for(int i=0;i<n;i++) {
		scanf("%lf %lf",&k,&c);
		if(i==0) m=(c-0.5)/k;
		else m=fmax(m,(c-0.5)/k);
	}
	printf("%.6lf",m);
	return 0;
}
