#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

/*
1 to 30, which ones are prime?

sieve algorithm: assume all numbers are prime
1 out then 2 prime , now all numbers divisible by 2 are crossed out(all even)
then 3 prime, now all..
then 5 prime, now all ..
then 7 prime , now all divisible by 7 are crossed out
then 11..


the smallest divisor of any composit number is a prime number
*/

/*
Problem:
Q < 10^7 queiry, N < 10 ^ 7 and sqrt(10^7)
*/

vector<bool> isPrime(N,1);
int main(){

	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < N; i++){		//fine with constraints < 10^7 + 10
		if(isPrime[i] == true){
			for(int j = 2 * i; j < N; j+=i){
				isPrime[j] = false;
			}
		}
	}
	//time complexity : n/2 + n/3 + n/5 +....+ n/n (N== n)
		//n(1/2 + 1/3 + 1/4 + .... ..+ 1/n) = n log n
	//only for prime number : n/2 + n/3 + n/5 + n/7 + n/11 +..+ = n log(log n)

	for(int i = 1; i < 100; i++){
		cout << isPrime[i] << "\n";
	}

	//soln:
	int q;
	cin >> q;
	while(q--){
		int num;
		cin >> num;
		if(isPrime[num]){
			cout << "Prime" << "\n";
		}
		else{
			cout << "Not Prime" << "\n";
		}
	}

	  

}