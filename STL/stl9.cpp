 //set : discontinuous memory allocation
//maps stores pair, if we remove vlaue , it becomes set
//key points: ordered, no duplicates , time complexity logn

#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s);
void printmultiset(multiset<string>&s);

int main(){
	//declaration and initialization
	set<string>s;
	s.insert("abc"); //logn
	s.insert("zsdf"); 
	s.insert("bcd");
	s.insert("abc"); //no duplicate in set
	//print
	print(s); //ordered lexographically

	//just like map, we do not directly access a value in set
		//there could be segment error if iterator of the value does not exist
	auto it = s.find("abc"); //O(logn)
	if(it!=s.end()){
		s.erase(it); //logn
	}
	print(s);
	//just like map inside erase we can use iterator or value 
		//in map : key in set: value
	//when deleting by value we there is no chance of segment error
	s.erase("bcd"); 
	print(s);


	//when to use:
	//map: frequency , sorted 
	//set : unique , sorted
	//problem
	/*
	Given N strings,print unique strings in lexographical order
	N<=10^5
	|s|<=  100000
	*/
	set<string> ss;
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		string str;cin>>str;
		ss.insert(str);
	}
	print(ss);



//unordered_set
	//key points:
	//1.only unique / exists or not question
	//2.all time complexity becomes O(1)
	//3. internal implimentation: set -> tree(red,black)
				//unordered_set -> hash_table
	//data types : no vector, pair,set , map

	//problem:
	/*
	given n strings and q queries in each query given a string 
	print that string exist or not
	*/
	int m;cin>>m;
	unordered_set<string> u_s;
	for(int i=1;i<=m;i++){
		string str; cin>>str;
		u_s.insert(str);
	}
	int q; cin>>q;
	while(q--){
		string str; cin>>str;
		auto it = u_s.find(str);
		if(it == u_s.end()){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}



//multiset : same as set but allows duplicate, lexographically sorted
	//keypoints :
	//1. iterator points to the first value if duplicate exists
	//2. when we .erase by iterator one value deletes but when
		//we erase by value all duplicates deletes
	//time complexity O(logn) and inbuit implimentation same as set

	multiset<string> m_s;
	m_s.insert("abc"); 	//logn
	m_s.insert("zsdf");
	m_s.insert("abc");
	m_s.insert("abc");

	auto itt = m_s.find("abc");
	if(itt!=m_s.end()){
		m_s.erase(itt); //first abc deleted
	}
	printmultiset(m_s);

	//but if we delete by value
	m_s.erase("abc"); //all abc removed
	printmultiset(m_s); 

	//for multiset and set 
	//all functions has time complexity O(n)
		// s.size(), s.clear(), s.erase("sg ")
	//but for unordered_set time complexity is O(logn)

}

void print(set<string>&s){
	for(string value: s){
		cout<<value<<endl;
	}

	//or we can use
	for(auto it = s.begin();it!=s.end();it++){ //it+1 is invalid
		cout<<(*it)<<endl;
	}
	cout<<endl;
}

void printmultiset(multiset<string>&s){
	cout<<endl;
	for(string value: s){
		cout<<value<<endl;
	}
}

