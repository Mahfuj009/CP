//Container : map (discontinuous)
/*

Map:
1.maps : stored in ordered (lexiographically a to z)
2.unordered map
3.multimaps : not necessary for cp

map --> key : value (key and value can be anytype or container)
since not continuous memory allocation we can not use iterator like: it+1
*/

#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m);

int main(){

//declaration and initialization
	map<int ,string> m;

	m[1] = "abc"; // TC: O(logn) , here 1 is key and abc string is the value
	m[5] = "cde";
	m[3] = "acd";

	//we can also insert as pair(key,value);
	m.insert({4,"afg"});
	//or 
	m.insert(make_pair(10,"efg"));

	//stored in order 
	//iterator
	map<int,string> :: iterator it;// or auto it = begin();
	for(it=m.begin();it!=m.end();it++){ //it++ is valid, not i=i+1
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
	print(m);

	//if we just do
	m[6]; //6 key added but value is empty string here , if value
			//were int the 0 would be added as value , tc= O(logn);
	print(m);

	//the access time complexity is also O(logn)
	cout<<m[10]<<endl; //value printed //Tc = O(logn)


	//map.find() method
	auto itt = m.find(3); //return iterator to the pair, TC: O(n)
						// the pair must exist otherwise crash
							//(iterator ~~ pointer variable)
	if(itt ==m.end()){
		cout<<"NO VALUE"<<endl;
	} else{
		cout<<(*itt).first<<" "<<(*itt).second<<endl;
	}


	//m.erase() to erase and element from map , element must exist
	auto iit = m.find(10);
	if(iit !=m.end()){
		m.erase(iit);		//this method has time complexity O(logn)
	}
	print(m);


	//map.clear() method to completely format the map
	m.clear(); //time complexity O(logn)
	print(m);

	//when inserting an element the time complexity is O(logn)
	//but when we insert and the key is a string it has to compare
		//with other elements so
		//time complexity becomes O(s.size()*logn);
	//example:
	map<string,string> ss;
	ss["abcdef"] = "xyz"; //time complexity 6*logn
	// the size of s is small so it is often neglibile in most cases


	//problem 1:
	/*
	Given N strings,print unique string in lexogreaphical order with 
	their frequency. N<=10^5
	|s|<=100
	*/
	//sol:
	int n;cin>>n;
	map<string,int>si;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		si[s]++;
	}
	cout<<endl;
	for(auto pr: si){
		cout<<pr.first<<" "<<pr.second<<endl;
	}

}

void print(map<int,string>&m){
	cout<<endl;
	for(auto &pr:m){
		cout<<pr.first<<" "<<pr.second<<endl;//access TC : O(logn)
	}
	cout<<endl;
}