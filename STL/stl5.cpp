//iterators : pointer like structure
//points to element of container
#include<bits/stdc++.h>
using namespace std;


int main(){
	vector<int> v = {1,3,5,6};

	//v.begin() points to the v[0] element
	//v.end() points to the next address of the last element

	//declaration of iterator
	vector<int>:: iterator it = v.begin(); //now it points to v[0]
	cout<<*it<<endl; //1 = v[0]
	cout<<*(it+1)<<endl; //3 = v[1]

	//we can also just declare the iterator not initialize it and run loop
	for(it = v.begin();it!=v.end();it++){
		cout<<*it<<" ";		//referece not copy
	}
	cout<<endl;

	//in iterators it++ and it+1 are not the same
	// it++; points to the next element of the container : 
		//works for both sequential and discontinuous container : vector,set,maps
	//it+1; point to the next address of the it
		//so only works for continuous memory allocated contianer : vector (not set or map)


	//iterator for vector pair
	vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
	vector<pair<int,int>> :: iterator itt;
	//itt points to a pair now
	cout<<endl;
	for(itt = v_p.begin();itt!=v_p.end();itt++){
		cout<<(itt->first)<<"  "<<(itt->second)<<endl; //->only for pair
		//or
		cout<<(*itt).first<<"  "<<(*itt).second<<endl;
	}

}

/*
No input
*/