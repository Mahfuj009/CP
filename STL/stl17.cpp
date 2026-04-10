#include<bits/stdc++.h>
using namespace std;

//upper_bound() and lower_bound() : returns the pointer/iterator
//lower_bound : return iterator to the first equal if not found next greater
//upper_bound(): returns iterator to the next greater element

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; ++i){
		cin >> a[i];
	}
	sort(a,a+n); // we must sort first array and vector both

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}
	cout << '\n';
							//inside first address and next of end address
	int *ptr = upper_bound(a+4,a+n,5); //could cause problem if dne
	//if dne then return the next position 
	if(ptr == (a+n)){ //a+n is the next postion of the end bound of inserted in the func
		cout << "Not found"; //ptr = nth location's pointer
		return 0;
	}
	cout << (*ptr) << endl;



	//vector
	vector<int>v(n);
	for(int i = 0; i<n; ++i){
		cin >> v[i];
	}
	//we must sort before using upper_bound and lower_bound
	sort(v.begin(),v.end());
	//now indexes have changed 

	//now iterator : type auto  //in array we used pointer but here reference
	auto itt = upper_bound(v.begin(),v.end(),5); //TC : logn

	if(itt == v.end()){
		cout << "Not found" << '\n';
		return 0;
	}
	cout << (*itt) << '\n';


	//set and map : no need to sort
	//we should not do the same like array and vector that would be O(n) TC
	set<int>s;
	for(int i =1 ; i<=n; ++i){
		int x ; 
		cin >> x;
		s.insert(x);
	}

	auto iit = upper_bound(s.begin(),s.end(),5); // time complexity O(n) not logn
	//set map uses tree for inbuilt implimentation so the time complexity is
	// not logn cuase they do not use linear seach , they use tree
	cout << (*iit) << endl;

	//in the case of set and map we will use :
	auto iitt = s.upper_bound(5); // now time complexity is  logn
	cout << (*iitt) << endl;

// map: lower bound upper bound only works on keys not on values
//upperbound, lower_bound() works on pairs ,strings , any data type

	 
}

/*
Input: 
6
4
5
5
25
7
8
4
5
5
25
7
8

5
5
25
7
8

output: 
4 5 5 7 8 25 
8
7
7
7

*/