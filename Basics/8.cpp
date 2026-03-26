/*
Given 2d array a of N*N integers. Given Q queries and
in each query given a,b,c and d print sum of square 
represented by (a,b) as top left point and (c,d) as
top bottom right point

Constraints:
1<=N<=10^2
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
long long pf[N][N]; //by default all element 0 = declared in global

int main(){
	int n;
	cin>>n; //prefix sum must always initialize from 1
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
			pf[i][j] = arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
		}
	}

	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		long long sum ;
		cout<<pf[c][d]-pf[c][b-1]-pf[a-1][d] - pf[a-1][b-1]<<endl;
		
	}	//Time complexity <1s means O(n2) + O(q) = O(n2) 
			//n<10^7	
}
			 	

	




/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];

int main(){

	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}

	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		long long sum =0;
		cin>>a>>b>>c>>d;
		for(int i=a;i<=c;i++){
			for(int j= b;j<=d;j++){
				sum+=arr[i][j];
			}
		}
		cout<<sum<<endl;	 //TC = O(n*n) + O(q*n*n) =Q(q*n*n)
									// = O(n3)
									//10^11 can not do
	}

	
}
*/