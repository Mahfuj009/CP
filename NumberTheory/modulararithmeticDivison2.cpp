#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Problem :
You haven given a language of N alphabets, have to make a password of length
k, how may password possible find the modular M?
K <= N <= 1e5
M = 1e9 + 10;
T < 10;

ans : k! * nCk = k! * (n! / (n-k)! * k!)

*/

const int N = 1e5 + 7;
const int M = 1e9 + 7;

int binExp(int a, int b, int m){
	int res = 1;
	while(b){
		if(b & 1){
			res = (res * 1ll * a ) % M;
		}
		a = (a * 1ll * a) % M;
		b >>= 1; 
	}
	return res;
}

int fact[N];
void solve(){
	int n, k;
	cin >> n >> k;
	fact[0] = 1;
	for(int i = 1; i < N; i++){
		fact[i] = (fact[i-1] * i) % M;
	}
	int nom = (fact[n] * 1ll * fact[k]) % M;
	int den = (fact[n-k] * 1ll * fact[n]) % M;
	den = binExp(den, M - 2, M) % M;
	int ans = (nom * 1ll * den) % M;
	cout << ans << "\n"; 



}


signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int t; cin >> t;
	while(t--) solve();
}

/*
input:
1
3
3
output : 6

*/