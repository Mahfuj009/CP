//Nesting in map and set

#include<bits/stdc++.h>
using namespace std;

int main(){
	map<pair<int,int>,int>mp;
	//map is always sorted by keys, so pairs will be sorted here

	//sorting pair
	pair<int,int>p1,p2;
	p1 ={1,2};
	p2 = {2,3};
	//p1<p2 cause 1<2 ; pair is compared from the left size
	cout<<(p1<p2)<<endl; // 1

	//again
	pair<int,int>p3,p4;
	p3 = {3,4};
	p4 = {3,5}; 
	//p3<p4 : compared from the left 4<5
	cout<<(p4<p3)<<endl; // output : 0


	//nested set in map
	map<set<int>,int>ms;
	// map is sorted by keys: sets //here sorted by sets

	//sorting sets and vector
	set<int> s1 = {1,2,3};
	set<int> s2 = {2,3};
	//compared from left s1<s2 : 1<2
	cout<< (s1<s2)<<endl; // output : 1
	//vector is also sorted similarly

	//** anything that could be sorted we can use inside the maps as keys
	// such: set,vector,common data type ,string, pair
	cout<<"\n\n\n"<<endl;


	//example of working with an nested map
	map<pair<string,string>,vector<int>>m;
	//taking input:
	int n; cin>>n; //first number of keys: num of pairs
	for(int  i=0;i<n;i++){
		string fn,ln; //first and second of each pair
		int ct;	//size of value: vector   for each pair
		cin>>fn>>ln>>ct;
		for(int j=0;j<ct;j++){ //inserting ct numbers for each value vector
			int x;cin>>x;
			m[{fn,ln}].push_back(x);
			//(vector)
		} 
	}

	//printing
	for(auto &pr:m){ //pr represet each pair of map( not pair)
		auto &full_name = pr.first; //full name is they key of map,that is a pair
		auto &list = pr.second; //second is the value of map : vector
		cout<<full_name.first<<" "<<full_name.second<<endl;
		//printing fn and ln
		for(auto &element: list){ //printing all elements of each vector
			cout<<element<<" ";
		}
		cout<<endl;
		cout<<endl;
	}
}

/*
input: notice how they are sorted by keys : pairs (lexograpically);

4
a b 4
1 2 3 4
d f 3
2 3 4
c d 2
1 2
b d 1
2

*/ 