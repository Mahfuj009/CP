#include<bits/stdc++.h>
using namespace std;


//to swap return false , Not swap return true / return the condition I need
bool cmp(int a, int b){
	if(a<b) return false; // first<second : swap -> order will be decreasing
	else return true;
}

bool cmp2(pair<int,int>a, pair<int,int>b){
	return a<b; // I want in increasing order
	// I will get first < second means increasing order
}

void solve(){
	//using sort 
	int n ; cin >> n ;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a+3, a+n); //(first address , next address of the last address);

	for(int i =0 ; i<n ; i++){
		cout << a[i] << " ";
	}
	cout << '\n';


	//use of comparator
	vector<int> v(n);
	for(int i =0 ; i<n ; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);

	for(int i= 0; i<n; i++){
		cout << v[i] << " ";
	}
	cout << '\n';

	vector<pair<int,int>>vp(n);
	for(int i =0; i<n; i++){
		cin >> vp[i].first >> vp[i].second ;
	}
	sort(vp.begin(), vp.end(), cmp2);

	for(int i=0; i<n ; i++){
		cout << vp[i].first << " "<< vp[i].second << '\n';
	}
}


signed main(){
	solve();
}