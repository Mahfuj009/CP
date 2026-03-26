//recursion

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n==0) return 1;
	return n*fact(n-1);
}


int main(){
	cout<<fact(5)<<endl;
}

//Time complexity of recursive function 
//1. Number of function calls : in this case equal to n;
//2. Time complexity of each function call : in this case 1
// Time complexity = O(n) 
// if there were a for loop in function then : O(n2)

