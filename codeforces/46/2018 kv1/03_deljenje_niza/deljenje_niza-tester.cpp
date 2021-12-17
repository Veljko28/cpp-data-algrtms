#include<bits/stdc++.h>
#define MAXN 8005
//Napomena: Nisam testirao u slucaju da je rezultat -1, trebalo bi da je samo u 08 taj rezultat
using namespace std;
char s[] = "testcases/01.in";
char t[] = "testcases/01.out";
int a[MAXN];
int main()
{
	FILE* fin;
	FILE* fout;
	int n;
	long long ts,cs,ms;
	int l,r;
	bool ok;
	for(int g=0;g<22;g++) {
		fin = fopen(s,"r");
		fout = fopen(t,"r");
		fscanf(fin,"%d",&n);
		ts=0;
		cs=0;
		printf("%d. n = %d\n",g+1,n);
		for(int j=0;j<n;j++) {
			fscanf(fin,"%d",&a[j]);
			ts=ts+a[j];
		}
		for(int j=0;j<n;j++) {
			if(a[j]<=0 || a[j]>1e9) {
				printf("%d. Los ulaz - broj van opsega\n",g+1);
				break;
			}
			cs=cs+a[j];
			if(cs*2==ts) {
				printf("%d. Los ulaz - pocetni niz moze da se podeli\n",g+1);
				break;
			}
		}
		fclose(fin);
		fscanf(fout,"%d %d",&l,&r);
		fclose(fout);
		if(l!=-1) {
			l--;
			r--;
			ms=0;
			cs=0;
			ok=false;
			for(int i=l;i<=r;i++) cs+=a[i];
			for(int i=0;i<n;i++) {
				if(i<l || i>r) ms+=a[i];
				if(ms*2==ts-cs) {
					ok=true;
					break;
				}
			}
			if(!ok) printf("%d. Netacan Izlaz\n",g+1);
		}
		if(s[11]!='9') s[11]++;
		else {
			s[11]='0';
			s[10]++;
		}
		if(t[11]!='9') t[11]++;
		else {
			t[11]='0';
			t[10]++;
		}
	}
	return 0;
}
