/*
Given a string S of lower case english alphabets of Length N and two integers 
L and R . Luffy wants to know wheather all the letters of the substring
L to R (L and R included) can be rearranged to from a palindrome or not.

Constraints:
1<=t<=10
1<=N,Q<=1e5
1<=L<=R<=N
'a'<=S[i]<='z' for 1<=i<=N

intput t , n, q,string ,(l,r.....)
*/

//episode 16 , got problem with the output

#include<bits/stdc++.h>
using namespace std;
const int N =1e5;
int hsh[N+10][26];

int main(){
	int t;
	cin>>t;
	while(t--){

	for(int i=0;i<N;++i){
		for(int j=0;j<26;++j){
			hsh[i][j] =0;
		}
	}
	int n,q;cin>>n>>q;
	string s; cin>>s;
	for(int i=0;i<n;i++){
		hsh[i+1][s[i]-'a']++; //hash array 1 based is better
	}
	for(int i =0;i<26;++i){
		for(int j=1;j<=n;++j){
			hsh[j][i] += hsh[j-1][i];
		}
	}
	while(q--){
		int l,r; cin>>l>>r;
		int oddCt =0;
		for(int i=0;i<26;++i){
			int charCt = hsh[r][i] - hsh[l-1][i];
			if(charCt%2 !=0) oddCt++;
		}
		if(oddCt>1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	} 	
	}
}

//brute force using hashing
/*
	int t; cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
	string s;cin>>s;

	while(q--){
		int l,r; cin>>l>>r;
		int hsh[26] ={0};
		l--;r--;
		for(int i=l;i<=r;i++){
			hsh[s[i]-'a']++;
		}
		int oddCount =0;
		for(int i=0;i<26;++i){
			if(hsh[i]%2 !=0) oddCount++;
		}
		if(oddCount>1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
	}  //Time Complexity : iteration > 1e7 that's why doesnot work
	
*/

/* input:
2
5 5 
abcec
1 2 
2 5 
3 5
1 5
1 4
5 5 
aabbc
1 2 
2 5 
3 5
1 5
1 4
*/