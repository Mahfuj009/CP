#include<bits/stdc++.h>
using namespace std;


vector<int> NGE(vector<int> v){
	stack<int> st;
	vector<int>nge(v.size());
	for(int i=0; i<v.size(); i++){
		while(!st.empty() && v[st.top()]<v[i]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}
	return nge;
}

void solve(){
	int n ; cin >> n;
	vector < int > v(n);

	for(int i=0;i<v.size();i++){
		cin >> v[i];
	}

	vector<int> nge = NGE(v);
	for(int i = 0 ; i<v.size();i++){
		cout<< v[i] << ' ' << (nge[i] == -1 ? -1 : v[nge[i]])<<endl;
	}
}


signed main(){
	solve();
}