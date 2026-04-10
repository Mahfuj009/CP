//stacks and queues

#include<bits/stdc++.h>
using namespace std;


void stk(){ //LIFO
	//stack : last in first out
	//operation only on top element
	//1.push 2.pop 3.top and s.clear()
	stack<int>s;
	s.push(3);
	s.push(5);
	s.push(8);
	s.push(43);

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}


void qq(){ //FIFO
	//quequ : first in first out
	queue<string>q;
	q.push("abf");
	q.push("eour");
	q.push("erer");

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
}

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	stk();
	cout<<'\n';
	qq();

}