//finding lower bound and upper bound using binary search

#include<bits/stdc++.h>
using namespace std;


//lower_bound = equal to the element , if not then the closest greater number
int lowerbound(vector<int> &v , int element){
	int lo = 0, hi = v.size()-1; //search space
	int mid ;
	while(hi-lo>1){
		mid = (hi + lo) / 2;
		if(v[mid]<element){
			lo = mid + 1;
		}
		else{
			 hi = mid;
		}
	}
	if(v[lo] >= element){
		 return lo;
	}
	else if(v[hi] >= element) {
		return hi;
	}
	return -1;
}


//upper bound : closest greater number
int upperbound(vector<int>&v, int element){
	int lo = 0 , hi = v.size() - 1;
	int mid = 0 ; 


	while(hi - lo >1){
		mid = (hi + lo) / 2;
		if(v[mid]<=element){
			lo = mid + 1;
		}
		else{
			hi = mid;
		}
	}
	if(v[lo]>element) return lo;
	else if(v[hi]>element) return hi;
	return -1;
}

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int n ;
	cin >> n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int lb = lowerbound(v,3);
	cout<<lb<<'\n';


	int ub = upperbound(v,4);
	cout<<ub<<'\n';
}