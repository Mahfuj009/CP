//binary search


#include<bits/stdc++.h>
using namespace std;


/*
Binary Search applies for monotonics functions 
Monotonic functions - maintains a order acesending or desending
Ex:
1 2 5 6 7 : monotonic function
1 2 6 5 7 : not monotonic
7 5 4 3 2 : monotonic

in graph of x vs y if slop is positive : y increases with x : monotonic
therefore we can apply binary search

Binary Search to solve problems include Predicate functions:
Predicate functions -> functions that only returns 2 values ordered(monotonic) , such : true/false or 0/1

 f f f f f f t t t t t : monotonic -> bs applies
 ttttttfffff : applies
 t f t f t t : not monotonic but predicate : bs does not applies must be ordered / monotonic

*/


int bsearch(vector<int>&v, int element){
	int lo = 0, hi = v.size()-1;
	int mid;

	while(hi-lo>1){
		mid = (hi + lo) / 2;
		if(v[mid]<element){
			lo = mid + 1;
		}
		else{
			hi = mid;
		}
	}
	if(v[lo]==element) return lo;
	else if(v[hi] == element) return hi;
	else return -1;
}

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int n ; cin>>n;
	vector<int>v(n);
	for(int i=0; i<n;i++){
		 cin>>v[i];
	}
	int find ; cin>>find;

	int idx = bsearch(v,find);
	cout<<idx <<' '<<'\n';
}