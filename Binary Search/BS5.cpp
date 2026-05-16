//Problem : agressive cows
/*
Farmer John has buit a long barn, with N (2<=N<=100000) stalls.
The stalls are located along a straight line at positions x1,..xN
(0<=xi<=1e9).
His c(2<=c<=n) cows dont like this barn layout and become aggressive
towards each other once put into a stall. To prevent the cows from
hurtion each other, He wants to make the minimum distance between
any two cows maximum.

Input : t test cases
N and C  
N+1 : i+1 contains an integer stall location , xi

*/



#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,cows; 
int positions[N];

bool canPlaceCows(int minDist){
	int lastPos = -1;
	int cows_ct = cows;

	for (int i = 0; i < n; ++i){
		if(positions[i]-lastPos >= minDist || lastPos == -1){
			cows_ct --;
			lastPos = positions[i];
		}
		if(cows_ct==0) break;
	}
	return  cows_ct == 0;
}


void solve(){
	cin >> n >> cows;
	for(int i=0; i<n; i++ ){
		cin>>positions[i];
	}
	//TTTTTTFFFFFF
	sort(positions,positions+n);
	int lo = 0, hi = 1e9, mid;
	while( hi - lo > 1){
		mid = ( hi + lo ) / 2;
		if(canPlaceCows(mid)){
			lo = mid;
		}
		else{
			hi = mid - 1;
		}
	}

	if(canPlaceCows(lo)){
		cout << lo << '\n';
	}
	else{
		cout << hi << '\n';
	}
}


signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) solve();
}