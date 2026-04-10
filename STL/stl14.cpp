//balancing parenthesis

#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};

bool solve(){
	string str; 
	cin >> str;
	stack<int> st;
	for(char bracket : str){
		if(symbols[bracket]<0){
			st.push(bracket);
		}
		else{
			if(st.empty()) return false;
			char top  = st.top();
			if(symbols[bracket] + symbols[top] != 0){
				return false;
			}
			st.pop();
		}
	}
	if(st.empty()) return true;
	else return false;

}


signed main(){
	int t; 
	cin >> t;
	while (t--) {
		if(solve()){
			cout<< "YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}