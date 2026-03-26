/*
Given array a of N integers, Given Q queries and in
each query given L and R print sum of array elements
from index L to R  (L and R included);

Constraints:
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/

//Prefix Sum : Precomputation

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int sum[N];	//prefixsum array : always take 1d

int main(){
	int n; cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i] = sum[i-1] + a[i];
	}					//TimeComplexity O(N)

	int q;cin>>q;
	int L,R;
	while(q--){
		cin>>L>>R;
		cout<<sum[R]-sum[L-1]<<endl;

		}			//TC = O(Q)
}