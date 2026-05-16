#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*

Problem : Marko needs to drop down M metres of wood. In forest he can cut a single row
of trees. Marko's machine sets a height parameter H and cuts all trees above it. Find the
max value of H for which Marko gets his wood.
*/
const int N = 1e6+10;
int n;
ll m;
ll trees[N];

bool isWoodSufficient(ll h){
	ll wood = 0 ;
	for( int i = 0; i < n; i++){
		if(trees[i]> h){
			wood += trees[i] - h;
		}
	}
	return wood>=m;
}

void solve(){
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++ ){
			cin>>trees[i];
	}
	ll lo = 0, hi = 1e9, mid;
	while(hi - lo >1 ){
		mid = ( lo + hi ) / 2;
		//T T T T T T F F F F F F
		if(isWoodSufficient(mid)){
			lo = mid;
		}
		else{
			hi = mid -1;
		}
	}

	if(isWoodSufficient(hi)){
		cout << hi << '\n';
	}
	else{
		cout << lo << '\n';
	} // the problem is said to always have an answer
}


signed main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
}

/*
input : 
5 20
4 42 26 40 46

output:
36
*/