//pre-computation / presummation practice
//new : pre_gcd
/*
You are given an array  A of integers of size N. You will be given Q
queries, each query is represented by two integers L,R . You have to find
the gcd(Greatest Common Divisor) of the array after excluding the part
from range L to R inclusive (1 Based indexing). You are guaranteed that after 
excluding the part of the array remaining array is not empty.


Constraints:
2<=T,N<=1e5,1<=Q<=N,1<=A[i]<=1e5
1<=L,R<=N and L<=R

*/




#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
	int n,q;
	cin>>n>>q;
	int a[n+10];
	for(int i=1;i<=n;i++){
		cin>>a[i]; //for precomputation index from 1 always
	}
	int forward[n+10];
	int backward[n+10];
	forward[0]= backward[n+1] = 0;
	for(int i=1;i<=n;i++){
		forward[i] = __gcd(forward[i-1],a[i]);
	}
	for(int i=n;i>=1;i--){
		backward[i] = __gcd(backward[i+1],a[i]);
	}
	while(q--){
		int l,r;
		cin>>l>>r;

		cout<<__gcd(forward[l-1],backward[r+1])<<endl;

	} 
}
}
// Time complexity o(tN)+ o(q) ~ o(n2);
//n =10^6 , still works 


/*
//pre-computation / presummation practice





#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
	int n,q;
	cin>>n>>q;
	int a[n+10];
	for(int i=1;i<=n;i++){
		cin>>a[i]; //for precomputation index from 1 always
	}
	while(q--){
		int l,r;
		cin>>l>>r;
		int gcd =0; //gcd with 0 stays same
		for(int i =1;i<=l-1;i++){
			gcd = __gcd(a[i],gcd); //tc logn
		}
		for(int i=r+1;i<=n;i++){
			gcd = __gcd(a[i],gcd);
		}
		cout<<gcd<<endl;
	}
	} 
	
}
//Time complexity = O(t*n) +O(tqn*logn) ~ O(n3)
//when n = 1000 ; nop = 10^6 so works
*/