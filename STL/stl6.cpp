//iterators 2.0
//better ways of implementation
//1.range based loops
//2.auto keyword in iterator
#include<bits/stdc++.h>
using namespace std;

int main(){

//range based loop
	vector<int> v= {2,3,5,6,7};
	for(int value:v){
		cout<<value<<" "; //value is a copy value = v[0] then = v[1] ..
	}
	cout<<endl;

	//since value is a copy
	for(int value:v){
		value++;		//nothing will change
	}
	for(int value:v){
		cout<<value<<" ";
	}
	cout<<endl;

	//we use reference to alter the values of the vector in range based loop
	for(int &value:v){
		value++;
	}
	for(int value:v){
		cout<<value<<" ";
	}
	cout<<endl;

	//range based loops for vector of pair
	vector<pair<int,int>>v_p ={{1,2},{2,3}};
	for(pair<int,int>&value:v_p){
		cout<<value.first<<" "<<value.second<<endl;
		//->first doesn't work here
	}

//use of auto keyword
	//we used to write
	//vector<pair<int,int>> :: iterator it; // to declare iterator that point to pair in vector container
	//but now we can directly skip this declaration
	//using auto old way of loop:
	cout<<endl;
	for(auto it=v_p.begin();it!=v_p.end();it++){ //it auto becomes a pointer type vector<pair<int,int>>
		cout<<it->first<<" "<<it->second<<endl;
	}


	//use of auto in range based loop
	cout<<endl;
	for(auto &value:v_p){ //&value auto gets the pair type
		cout<<value.first<<"  "<<value.second<<endl;
	}

}

