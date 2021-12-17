/*
Vladimir VladaMG98 Milenkovic
Problem: Dodavanje u kutije
Kvalifikacije 2018/19, prvi krug, drugi zadatak
*/
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
long long pw(int a, int b){
	long long ret = 1;
	while(b--) ret *= a;
	return ret;
}
int arr[MAXN];
int n, c, k;
long long soln(){
	long long sol = 0;
	for(int i = 1; i <= n; i++){
		sol += pw(arr[i], k);
	}
	return sol;
}
int main(){
	scanf("%d %d %d", &n, &c, &k);
	for(int i = 1; i <= n; i++){
		scanf("%d", &arr[i]);
	}
	if(k == 0){
		//I should change as many zeros I can to ones
		int operations_made = 0;
		int n_zeros = 0;
		for(int i = 1; i <= n; i++){
			if(arr[i] == 0) n_zeros++;
		}
		operations_made = min(n_zeros, c);
		int zeros_left = n_zeros - operations_made;
		int answer = n - zeros_left;
		printf("%d %d\n", answer, operations_made);
	} else if(k == 1){
		long long ans = soln();
		printf("%lld %d\n", ans + c, c);
	} else if(k == 2){
		int mx = arr[1]; int ind_mx = 1;
		for(int i = 2; i <= n; i++){
			if(arr[i] > mx){
				mx = arr[i];
				ind_mx = i;
			}
		}
		int operations;
		if(abs(mx + c) > abs(mx)){
			arr[ind_mx] += c;
			operations = c;
		} else operations = 0;
		printf("%lld %d\n", soln(), operations);
	}
	return 0;
}