//stl algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; ++i){
		cin >> v[i];
	}

	int min = *min_element(v.begin()+3,v.end()); //first 3 eleminated
	cout << min << '\n';

	int max = *max_element(v.begin(),v.end());
	cout << max << '\n';


	//accumulate
	int sum = accumulate(v.begin(),v.end(),0); // 0 is initial sum
	cout << sum << '\n';

	//count 
	int ct = count(v.begin(),v.end(),6); // counting frequency
	cout << ct << '\n';

	//find  not important
	auto it = find(v.begin(),v.end(),22); //returns iterator, use int with *find
	if(it != v.end()){
		cout << *it << '\n';
	}
	else{
		cout << "Not found" << '\n';
	}

	//reverse : string , array, vector
	reverse(v.begin()+2,v.end());  // original vector is reversed not any copy
	for(auto val : v){
		cout << val <<" ";
	}
	cout << '\n';

	string s = "agldfgr";
	reverse(s.begin()+2,s.end());
	cout << s << '\n';


}