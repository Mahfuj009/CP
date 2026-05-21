#include<bits/stdc++.h>
using namespace std;
using ll = long long;



//bit-masking 2.0
//subset generation

/*

01010   2 3 7 8 9

subset [3,8] represent here 0 0 0 0 0 
 is 0 1 0 1 0 represent the subset -> bit-masking

 array 2,4,5 --> 0 0 0
 _ * _ * _ = 2 * 2 * 2 = 8 subsets

 2^n subsets for the array of n length
 [2,4,5] - 8   n-> 2^n
 			   0 -> 2^n-1
0 - 000 []
1 - 001 [2]
2 - 010 [4]
3 - 011 [24]
4 - 100 [5]
5 - 101 [25]
6 - 110 [54]
7 - 111 [245]

*/

/*
Problem:
Given an array nums of unique elements, return all possivle subset (the power of set).
must not contain duplicate. Return the solution in any order
*/

void solve(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		nums[i] = x;
	}

	int subset_ct = (1 << n); //2^n
	vector<vector<int>> subsets;

	for(int mask = 0; mask < subset_ct; mask ++){
		vector<int> subset;

		for(int i = 0; i < n; i++){
			if( mask & (1 << i))
				subset.push_back(nums[i]);

		}
		subsets.push_back(subset);
		
	}
	for(auto vec : subsets){
		for(auto val : vec){
			cout << val << " ";
		}
		cout << "\n";
	}



}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	solve();
}