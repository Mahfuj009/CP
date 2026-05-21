//XOR
#include<bits/stdc++.h>
using namespace std;

int main(){
	//swapping two number using xor
	int a = 4, b = 6;
	//odd number of 1 is 1 

	//xor of two same number is 0
	// x^x = 0 and x ^ 0 = x

	a = a ^ b;
	b = b ^ a; // b = b ^ (a ^ b) =  a
	// x ^ y ^ z = y ^ x ^ z (xor is associative)
	//b = b ^ a; // b --> a

	a = a ^ b; // (a ^ b) ^ b = a
	//we swapped two numbers without using any extra variable


	/*
	Given array a of n integers. All integer are present in event
	count except one. Find that one integer which has odd count in O(N)
	time complexity and O(1) space
	n < 10^5
	a[i] < 10 ^5
	*/

	//hash array : O(N) space
	//stl : O(N) space

	int x, ans = 0, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		ans = x ^ ans;
	}
	cout << ans << "\n";




}