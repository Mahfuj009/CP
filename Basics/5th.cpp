/* Given T test cases and in each test case print its 
factorial for each test case %M ,where M = 10^9 + 7

constraints :
1<=T<=10^5
1<=N<= 10^5

*/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5 + 10;
long long fact[N];

int main(){

	int n;
	cin>>n;
//precomputation
	fact[0] = fact[1] = 1;
	for(int i=2;i<N;i++){
		fact[i] = i*fact[i-1]%M;
	} //all values are predetermined so O(1) become TC
	cout<<fact[n]<<endl;

	long long int fact =1;
	for(int i =2;i<=n;++i){
		fact = fact*i%M;
	}
	//Time complexity O(T*N)// so time limt exceed 
	cout<<fact<<endl;
}