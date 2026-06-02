#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

vector<bool>isPrime(N,1);

//for highest prime and lowest prime
vector<int> lp(N,0), hp(N,0);

int main(){

//finding the lowest prime and the highest prime number
	//10? 5*2, lowest prime is 2 and highest prime is 576      
	

	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < N; i++){
		if(isPrime[i]){
			lp[i] = hp[i] = i; //lowest and  highest prime of a prime is i
			for(int j = 2 * i; j < N; j+=i){
				isPrime[j] = false;
				hp[j] = i;
				if(lp[j] == 0){
					lp[j] = i;
				}

			}
		}
	}

	for(int i = 2; i < 100; i++){
		cout << lp[i] << " " << hp[i] << "\n";
	}

	//prime factors of a number from highest or lowest prime

	int num = 50;
	vector<int>prime_factors;

	while(num > 1){
		int prime_factor = hp[num];
		while(num % prime_factor == 0){
			num /= prime_factor;
			prime_factors.push_back(prime_factor); //we can also store in map with count
		}												//unordered_map
	} //time complexity log n
	for(int factor : prime_factors){
		cout << factor << " ";
	}
	cout << "\n";

	//all divisors not multipliers : need to edit
	int m = 1e5 + 10;
	vector<int>multipliers[m];
	for(int i = 2; i < m; i++){
		for(int j = i; j < m; j+=i){
			multipliers[j].push_back(i);
		}
	}
	//tc = n/2 + n/3 + n/4 + ... = n Log n
	for(int i = 1; i < 10; i++){
		for(int mul : multipliers[i]){
			cout << mul << " ";
		}
		cout << endl;
	}


}