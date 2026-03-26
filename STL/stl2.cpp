//sequential container 
//vector

#include<bits/stdc++.h>
using namespace std;
void printV(vector<int>v);
void printVref(vector<int>&v);


int main(){
	//vector declaration
	vector<int>v; //vector<type>name

	//initialize
	int n;cin>>n;
	for(int i = 0;i<n;++i){
		int x;cin>>x;
		v.push_back(x); //adding at the end
	}
	printV(v); //vector argument
	printVref(v);

	//another way of vector initialization
		//declaring with size
	vector<int>p(10); //all 10 values are 0 by default
	//we can increase the size 
	p.push_back(10);
	printV(p); // size is 11 now 

	//specefiying the initial value
	vector<int>q(5,3); //all 5 elements are 3
	printV(q);

	//removing the last value v.pop_back() function
	p.pop_back();
	printV(p);

	//coping a vector
	vector<int>v2 = v; // v2 is a copy 
						// time complexity O(n)
	vector<int>&v3 = v; //v3 is a reference to v
						//time complexity is constant

	//we can declare vector of anything: pair,vector, array
	vector<string>vstr;
	

}


//vector in parameters and size function
void printV(vector<int>v){	//v is a copy;TimeComplexity O(n) 
	for(int i=0;i<v.size();++i){ 
		cout<<v[i]<<" ";
	}
	cout<<endl;	
	cout<<v.size()<<endl; //time complxity O(1)
}

//limit of vector and array are same as both 
	// use continuous memory allocation
	//local : <=xe5
	//global : <=xe7

//since copy is an expensive operation O(n)
	//we use reference in parameter

void printVref(vector<int>&v){
	for(int i=0;i<v.size();++i){ 
		cout<<v[i]<<" ";
	}
	cout<<endl;	
	cout<<v.size()<<endl; //time complxity O(1)

}