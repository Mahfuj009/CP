#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binExpRecur(int a, int b); //binary exponantation

//binary exponentation
int main(){
	cout << pow(2,3) << "\n"; //precision error
	double d = 1e20;
	cout << fixed << setprecision(30) << d <<"\n";
	//double can store very big value but not accurately

	//pow() this function return double, so precision error can occurs
	int a = 2, b = 13;
	int ans = 1;
	for(int i = 0; i < b; i++){
		ans *= a;
	} //O(b)
	cout << ans << "\n";

	/*
	divide and combine technique
	2^16 -> 2^8 * 2^8
	2^8 -> 2^4 * 2^4
	2^4 -> 2^2 * 2^2
	2^2 -> 2^1 * 2^1
	*/ //log(b) complexity

	// 3^ 13 = 3 * 3^12
	// 3^6 -> 3^3 * 3^3
	// ..
	//3 -> 3 * 3^0
	// this is called binary exponentiation

	/*
	f(a,b) -is even > f(a,b/2) * f(a,b/2)
		   -is odd  > a * f(a,b/2) * f(a,b/2)

	*/
	cout << binExpRecur(2,13) << "\n";
}

int binExpRecur(int a, int b){
	if(b == 0) return 1;
	int res = binExpRecur(a,b/2);
	if(b & 1){
		return (a * ((res * 1ll * res) % M) ) % M; //binExpRecur(a,b/2) * binExpRecur(a, b/2);instead use res
	}
	else{
		return (res * 1ll * res) %M;
	}
}