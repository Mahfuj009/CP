//map : discontinuous memory allocation  
//unordered map:
/*
Unordered map has 3 key differences with maps:
1.Inbuilt Implementation : map use tree but unordered_map use hash table
2.Time complexity : istead of O(logn) it has O(1): that's why we need to use ordered map if ordered is not needed
3.valid data types: for unordered_maps pair,set,vector is invalid because of the inbuit hash table implementation
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	unordered_map<string,int> u_m;

	//u_m.find(),u_m.indsert(),access all have tc: O(1)

	/*problem:
	Given N string and Q queries in each query you are given a string
	pring frequency of that string;

	constraints:
	N<=10^6
	|s| <=100
	Q<=10^6
	*/

	//Soln:
	//we do not need sorted so for better time complexity we use unordered_map

	unordered_map<string,int> m;
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		string s; cin>>s;
		m[s]++;
	}
	int q;cin>>q;
	while(q--){
		string s;cin>>s;
		cout<<m[s]<<endl;
	}

//multimap : same as map only difference is : 
	//we can use duplicate keys here
	//if we need to take input multiple values for the same key
//declaration
	multimap<int,string>m_m; 
	// we don't use multimap insead we do this to take duplicate keys
	map<int,vector<string>> M_M;

}

/*
input:

5
abc
abc
efg
pqr
efg

2
abc
efg
*/
