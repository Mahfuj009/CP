//Nesting in Vector
//vector of pair
#include<bits/stdc++.h>
using namespace std;
void printV(vector<pair<int,int>> v);

int main(){

	//vector of pair
	vector<pair<int,int>>v = {{1,2},{2,3},{3,4}}; //declaration and initialization
	printV(v);

	//taking input in a vector of pair
	vector<pair<int,int>> v_p1;
	int N;cin>>N; //this is the size of vector
	for(int i=0;i<N;i++){
		pair<int,int>temp_pair;
		cin>>temp_pair.first>>temp_pair.second;
		v_p1.push_back(temp_pair);
	}
	printV(v_p1);

	//2.taking input in a vector of pair
	vector<pair<int,int>>v_p2;
	for(int i=0;i<N;i++){
		int x,y;cin>>x>>y;
		v_p2.push_back({x,y});
		//or
		v_p2.push_back(make_pair(x,y));
	}
	printV(v_p2);

}


void printV(vector<pair<int,int>> v){ //taking a copy
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	cout<<endl;
}