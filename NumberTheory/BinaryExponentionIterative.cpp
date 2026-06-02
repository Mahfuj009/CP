#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

const int M = 1e9 + 7; // 1e18 + 7;

//Binary Exponention Iterative Method
/*

3^13 = 3 ^ (1101)
	=3 ^ (8 + 4 + 0 + 1)
	= 3 ^ 8 * 3 ^ 4 * 3 ^ 1

3^13 = 3 ^ 1101 ->  1
b     	a 			ans
1101    1 			3
110 	3^2 		3
11 		3^4 		3^5
1 		3 ^ 8 		3^13

setps -> bits in b
tc : log(b)
and a,b < 10 ^ n;

*/
int binExpIter(int a, int b){
	int ans = 1;
	while(b){
		if(b & 1){
			ans = (ans * 1ll * a) % M;
		}
		a = (a *1ll* a) % M;
		b >>=  1;
	}
	return ans;
}
// TC : log n


//large Binary exponanitaion a<= 10^18 or  a = 2 ^ 1024
/*
we have to calculate a^b % M = ((a%M)^b) % M 
if a <= 10 ^ 18 , first take modulo of  a then power

if M <= 10 ^18
ans * a and a*a multiplication are not possible cause it goes out of range
a + a + a + ..... a time = a * a
a + a < 2 * 10 ^ 18 ( mod M in each step)
	%M < 10 ^ 18
	+ a < 2 * 10 ^ 18
	% M < 10 ^ 18
//time complexity logn -> binary exponentiation
3 ^ 13 
3 ^ *=(8 + 4 + 0 + 1)
	3 -> 3
	6
	12 -> 15
	24 -> 34


*/
// a <= 10 ^ 18
int largerBinExp(ll a, ll b){
	int ans = 1;
	while(b > 0){
		if(b&1){
			ans = largerBinExp(ans,a);
		}
		a = largerBinExp(a,a);
		b >> = 1;
	}
	return ans;
}
//TC = log^2 (n)

//M <= 10 ^ 18
int largerBinExpM(ll a, ll b){
	int ans = 0;
	while(b > 0){
		if(b&1){
			ans = (ans + a) % M;
		}
		a = (a+a) % M;
		b >>= 1;
	}
	return ans;
}

int main(){
	//a & b < 1^9 , both are int, same for M <= 10^9
	cout << binExpIter(2,10) << "\n";
	cout << binExpIter(2,10255664) << "\n";


}