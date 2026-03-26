//Nesting in vector 2.0
//Array of vector
//vector of vector
#include<bits/stdc++.h>
using namespace std;
void printV(vector<int>v);
void add100(vector<int>&v);

int main(){
//array of vector	
	//declaration
	int n;cin>>n;
	vector<int>v[n]; //n numbers of vectors have been declared: v[0],v[1]...
	
	//input
	for(int i=0;i<n;i++){
		int n;cin>>n; //number of element I want to put in a vector
		for(int j=0;j<n;j++){
			int x; cin>>x;
			v[i].push_back(x);
		}
	}
	//important array of vector works like an 2d array where :
	//number of rows is fixed but each column is dynamic
	//example
		cout<<v[0][3]<<endl;
		v[2].push_back(4);
		//now there will be a 4 after 9 and the size of vector v[3] is 3 from 2

	//print
	for(int i=0;i<n;i++){
		printV(v[i]);
	}


//vector of vector
	//declaration
	vector<vector<int>> v_v;

	//input way 1
	int N;cin>>N; //taking the initial size of main vecotor
	for(int i=0;i<N;i++){
		int s_z;cin>>s_z;
		vector<int> temp;
		for(int j=0;j<s_z;j++){
			int x;cin>>x;
			temp.push_back(x);
		}
		v_v.push_back(temp);
	}
	//important:
	//vector of vector works like 2d array row and column number both are dynamic
	//adding one more row/vector:
	vector<int>add;
	add.push_back(3);add.push_back(5);
	v_v.push_back(add);

	//print
	cout<<endl;
	for(int i=0;i<v_v.size();i++){
		printV(v_v[i]);
	}


	//input way 2;
	vector<vector<int>> vec;
	int x;cin>>x;
	for(int i=0;i<x;i++){
		vec.push_back(vector<int>()); //inserting an empty vector each time
		int y;cin>>y; //taking the size of each vector
		for(int j=0;j<y;j++){
			//cin>>vec[i][j]; wrong XXX
			int x;cin>>x; vec[i].push_back(x);
		}
	}
	//adding 100 through reference in fucntion
	for(int i=0;i<vec.size();i++){
		add100(vec[i]);
	}
	//print
	cout<<endl;
	for(int i=0;i<vec.size();i++){
		printV(vec[i]);
	}

}


void printV(vector<int>v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

//because of the O(n) time complexity and parameters are copy 
//we take reference in function:

void add100(vector<int>&v){
	for(int i=0;i<v.size();i++){
		v[i] += 100;
	}
} 



//input:
/*
3
4
1 2 3 4
5
1 2 3 4 5
2
8 9

4
3
1 2 3
2
1 2
2
3 4
3
1 2 3

4
3
1 2 3
2
1 2
2
3 4
3
1 2 3


*/