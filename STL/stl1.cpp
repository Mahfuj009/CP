//sequential containers 
//pair

#include<bits/stdc++.h>
using namespace std;

int main(){
	//declaration
	pair<int,string>p; //pair<type1,type2>name;

	//initialization
	p = make_pair(2,"abc");

	//printing or calling
	cout<<p.first<<" "<<p.second<<endl;

	//another way to initialize a pair
	pair<int,string>q ;
	q= {5,"Kawai"};
	cout<<q.first<<" "<<q.second<<endl;

	//coping a pair
	pair<int,string>p1 = p;
	p1.second = "cute"; //p1 is just a copy of p
	cout<<p1.second<<" "<<p.second<<endl;

	//using reference
	pair<int,string> &p2 = p; //p2 is p;
	p2.second = "cute"; //p is also changed
	cout<<p2.second<<" "<<p.second<<endl;

	//taking input in pair
	pair<int,bool> p3;
	cin>>p3.first>>p3.second;
	cout<<p3.first<<"  "<<p3.second<<endl;

	//Ex1: two related array given and I want to perform
		//the same operation in each array
	int a[] = {1,2,3};
	int b[] = {2,3,4};
	pair<int,int>p_array[3]; //pair arrays
	p_array[0] = {a[0],b[0]};
	p_array[1] = {a[1],b[1]};
	p_array[2] = {a[2],b[2]};

	swap(p_array[0],p_array[2]); //both values of pair have been swaped

	for(int i=0;i<3;i++){
		cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;		
	}

}