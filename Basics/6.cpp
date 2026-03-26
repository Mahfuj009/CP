/*
Given array a of N integers. Given Q queries and 
in each query given a number X, print count of that 
number of that number in array


Constraints:
1<=N<=10^5
1<=a[i]<= 10^7
1<=Q<=10^5
*/

//queries means questions//

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N]; ////N<=10^5 so we can declare
//global auto 0 initialized


int main(){
//so we will use precomputation using hatshing
int n;cin>>n;
int a[n]; //n<10^7 so int type array
for(int i=0;i<n;++i){
	cin>>a[i];
	hsh[a[i]]++;
}
int q;cin>>q;
int x;
while(q--){
	cin>>x;
	cout<<hsh[x]<<endl;
}						//complexity O(N)+O(Q) =O(N)


/*
int N; cin>>N;
int a[N] ;
for(int i=0;i<N;++i){
	cin>>a[i];
}

int q;
cin>>q;
while(q--){
	int x;
	cin>>x;
	int ct=0;
	for(int i=0;i<N;++i){
		if(a[i]==x){
			ct++;
		}

	}				//Time complexity O(n*n); n~=q
					//n=10^7
cout<<ct<<endl;
}
*/


}