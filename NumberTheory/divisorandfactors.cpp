#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ct =  0;
	int sum = 0;

	for(int i = 1; i*i <= n; i++){ // or i <= sqrt(n)
		if(n % i == 0){
			cout << i <<" "<< n/i << "\n";
			ct += 1;
			if(n / i != i){
				sum += n/i;
				ct ++;
			} // for 36 , 6 x6 2 times
		}
	} // TC : O (sqrt(n))
	cout << sum << " \n";


	/*
1 x 24		n1 x n2
2 x 12		.......
3 x 8		.......
4 x 6		half of n, O(sqrt(n))
6 x 4
8 x 3
12 x 3
24 x 1

for 36

*/

	//2nd part
	/*
	x = p1 ^ x1 * p2 ^ x2 * p3 ^ x3 (prime factorization)
	36 = 2^2 * 3^2  //divisors are subset of prime factorization
		= 2 x 2 x 3 x 3 ( all subsets are divisors)

		0 -> n1 (count of p1 we can take) n1 is the count of p1

		(n1 + 1)(n2 +1)(n3 + 1)
		for 36
		(2 + 1)(2 + 1) = 9 divisors


		so if,
		x = p1^x1 * p2^x2 * .... pn^xn
		count of divisors = (n1 + 1)* (n2 + 1) * (n3 + 1).....(nn + 1)
		
		sums of divisors
		let x = p1^n1 * p2^n2 * p3^n3
			= (1 + p1 + p1^2 + p1^3+ ... + p1^n1) x 
			(1 + p2 + ...+ p2^n2) x
			(1 + p3 +....+ p3^n3)

			this is a geometric progression :
			(p1^n1+1  - 1)/(p1 -1)  x  (p2^n2+1  -1)/(p2-1)   x   (p3^n3+1 -1)/(p3 -1)

	36 = 2^2 * 3^2
		 (1 + 2 + 4) *
		 (1 + 3 + 9) = sum of divisors
		 divisors are 1x1, 1x2, 1x3, 2x1,2x3...4x9 are all divisors

	using the geometric progression formula:
	for 36 , sum of divisors
	(2^3  -1)/(2-1)  * (3^3 -1)/(3-1) = 91

	for 24
	= 2^3 * 3
	(3+1) *(1=1) = 8
	(2^4 -1)/(2-1) x (3^2 -1)/(3-1)=15*4 = 60
	*/

//prime cheack
	int m;
	cin >> n;
	if(n ==1){
		cout << 0 << endl;
		return 0;
	}
	bool is_prime = true;
	for(int i = 2; i <=sqrt(n); ++i){ // or i*i <= n
		if(n % i == 0){
			is_prime = false;
			break;
		}
	} //O(N)
	cout << is_prime << "\n";


	/*
	1 x 36
	2 x 18 // if not divided by 2 then not by 18 , corresponding
	3 x 12
	4 x 9
	....
	....
	*/


//prime factors
	/*
	36 /2
	18 /2
	9 / 3
	3 /3
	1
	common property for all numbers:
	the smallest divisor of a number is a prime number

	and for any composite number there will be a divisor before sqrt(n)
	*/

	int p; 
	cin >> p;
	vector<int> prime_factors;
	for(int i = 2; i<=sqrt(p); ++i){ //2nd rule
		while(p%i == 0){
			prime_factors.push_back(i);
			p /= i;
		}
	} //O(sqrt(n))
	if(p > 1){ //for numbers like 24 this condition is needed
		prime_factors.push_back(n);
	}
	for(int prime : prime_factors){
		cout << prime <<" ";
	}

}

/*
input : 
24
13
24

output:
1 24
2 12
3 8
4 6
50 
1
2 2 2 13 

*/