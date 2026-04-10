/*monk is supposed to arrange the list in such manner that
marks are in decreasing order but for the same mark 
lexographically

n = number of students <=1e5
1 <=length of the name  <=100
1<=marks<=100

*/


#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin >> n;

	map < int , multiset < string >> m;
	for( int i = 0; i < n; i++){
		int x;
		string s;
		cin >> s >> x;
		m[-x].insert(s);
	}


	/*
		auto it = --m.end();
	while(true){
		auto &students  = (*it).second;
		int marks = (*it).first;
		for(auto student : students){
			cout<<student<<" "<<marks<<endl;
		}
		if(it == m.begin()) break;
		it--;
	}
	*/
	//we can insert negative marks then we can use
		//range , and while printrin *-1 then reverse done
	for(auto pr : m){
		auto &students = pr.second;
		int marks = pr.first;
		for(auto student : students){
			cout<<student<<' '<<-1*marks<<endl;
		}
	}
}

signed main(){
	solve();
}

