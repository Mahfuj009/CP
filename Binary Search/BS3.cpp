//finding nth root of a number using binary search
#include<bits/stdc++.h>
using namespace std;

//for integer square root
int root(int n){
	int lo =1, hi = n;
	int mid;
	while(hi-lo>1){
		mid = (lo + hi) / 2;
		if(mid*mid<n){		//for cube mid*mid*mid ; for nth multiply(mid,t)
			lo = mid + 1;
		}
		else{
			hi = mid;
		}
	}
	if(lo*lo == n) return lo;
	else if(hi*hi == n) return hi;
	else return -1;
}

void droot(int x){
	double lo =1 , hi = x;
	double mid ;
	double eps = 1e-5; // this is the precision now the precision will be 4 decimal
					//difference between numbers are eps ; previous case int -> 1
	while(hi-lo>eps){
		mid = (hi + lo ) / 2;
		if(mid*mid < x){
			lo = mid + eps;
		}
		else{
			hi = mid;
		}
	}
	cout<<hi<<'\n'<<lo<<'\n';
	cout<<pow(x,.5); 
}

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;
	int sqroot = root(n);
	cout<<setprecision(10)<<sqroot<<'\n';

	int m ; cin >> m;
	droot(m);

}