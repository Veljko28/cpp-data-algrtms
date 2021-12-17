#include<bits/stdc++.h>
#define MAXN 8005
using namespace std;
int n;
int a[MAXN];
int main(int argc, char *argv[])
{
    FILE* fout = fopen(argv[1], "r");
	FILE* fsol = fopen(argv[2], "r");
	FILE* fin = fopen(argv[3], "r");
	fscanf(fin, "%d", &n); //brojevi iz ulaza
	int l_out,r_out,l_sol,r_sol;
	for(int i=0;i<n;i++) fscanf(fin,"%d",&a[i]);
	fclose(fin);
	fscanf(fsol,"%d",&l_sol); //Leva granica komisijskog resenja, mozda je -1, ukoliko resenje ne postoji
	if(l_sol!=-1) fscanf(fsol,"%d",&r_sol); //Desna granica komisijskog resenja, ukoliko resenje postoji
	fclose(fsol);
	if (!feof(fout)) fscanf(fout,"%d",&l_out);
	else return -1; //nema dovoljno brojeva
	if(l_out==-1) { //takmicar nije nasao resenje
		if(l_sol==-1) return 0; //resenje zaista ne postoji
		else return -1; //postoji resenje, koje takmicar nije pronasao
	}
	if(!feof(fout)) fscanf(fout,"%d",&r_out);
	else return -1; //nema dovoljno brojeva
	int l=l_out-1,r=r_out-1;
	if(l<0 || l>=n) return -1; //pocetak je van granica podniza
	if(r<0 || r>=n) return -1; //kraj je van granica podniza
	if(r<l) return -1; //leva granica je veca od desne
	if(l==0 && r==n-1) return -1; //takmicar je izbrisao ceo niz
	long long ts=0;
	for(int i=0;i<n;i++) ts+=a[i]; //racunamo ukupnu sumu
	long long s=0;
	long long cs=0;
	for(int i=l;i<=r;i++) cs+=a[i];
	for(int i=0;i<n;i++) {
		if(i<l || i>r) s+=a[i];
		if(s*2==ts-cs) return 0; //pronasli smo neka dva podniza uzastopnih, koja imaju istu sumu
	}
	return -1; //nije uspeo da pronadje dva ista kada se izbrise takmicarev podniz
}
