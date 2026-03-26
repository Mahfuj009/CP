//pre-computation or prefix sum
/*
Starting with a 1 -indexed array of zeros and a list of operations, for
each operation add a value to each the array element between  two given
indices, inclusive. Once all operations have been performed, return the 
maximum value in the array

Constraints:
3<=n<=1e7
1<=m<=2e5
1<=a<=b<=n
0<=k<=1e9
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 +10;  //int limit is arround ne7
long long arr[N]; //inside function limit is 1e5


int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int l,r,d;
		cin>>l>>r>>d;
		arr[l] += d;
		arr[r+1] -= d;
	}
	//now prefix sum :
	for(int i=1;i<=n;i++){
		arr[i] += arr[i-1];
	} //now we get the array 

	long long int max = -1;
	for(int i=1;i<=n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout<<max<<endl;

} //Time complexity = O(m+n+n) = O(n) = 1e7 iterations <= 1s

/*

int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b,d;
		cin>>a>>b>>d;
		for(int i =a;i<=b;i++){
			arr[i] += d;
		}
	}
	long long int max = -1;
	for(int i=1;i<=n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout<<max<<endl;

} //time complexity : O(m*n + n) =O(mn)=  1e7*1*5 =1*12 iterations >1s
*/


