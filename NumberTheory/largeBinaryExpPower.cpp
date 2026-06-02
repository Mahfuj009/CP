#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
using ll = long long ;



// b <= 1e18  tc: logn
int binExp(int a, ll b){
	int ans = 1;
	while(b > 0){
		if(b&1){
			ans  = (ans * 1ll * a) % M;
		}
		a = (a* 1ll * a) % M;
		b >>= 1;
	}
	return ans;
}


/*

(50^64)^32 % 10^9 + 7

//Coprime Numbers: if gcd of a,b is 1 then they are coprime

//ETF -> Eurler Tatient Functuion
N -> count of k s.t 1<= k <= N and k and N are coprime
5 -> 1,2,3,4
fi(5) = 4
fi(6) = 2 	(1,5)
fi(n) = n * multiplication of all coprime (1 - 1/p) ; p is all prime factors of n
fi(5) = 5 * (1 - 1/5) = 4;
fi(6) = 6  * (1- 1/2) * (1 - 1/3) = 2

(a^b) % M 
Euler's theorem 
a^b == a^(b mod fi(N)) mod (N)    //== is there - congrant to (congrancy of number)

//congrancy of number
a ==  b mod(n) means a divide by n , we get reminder b

(a^b %n) = (a ^ (b%fi(n))) % n

(a^b % M)
 = (a^(b%fi(m))) % m
 if n is prime,
 	fi(n) = n(1 - 1/n) = n - 1
 	for any prime number n etf = n - 1

 (a^b) % m = a^(b%fi(m)) % m
 if m i sprime
 (a^b) % m = a ^ (b% (m-1)) %m  where m is prime ***this is the formula

*/

int binExpLargeB(int a, ll b, int m){
	int ans = 1;
	while(b > 0){
		if(b & 1){
			ans = (ans * 1ll *a) % m;
		}
		a = (a * 1ll * a) %m;
		b = b >> 1;
	}
	return ans;
}


int main(){
	cin.tie(0)->sync_with_stdio(0);
	//2 ^ (64^32)
	int a = 2, b= 64, c = 32;
	cout << binExpLargeB(a,binExpLargeB(b,c,M),M);

}

/*
Leetcode:
a^b %1337  m = 1337 is not a prime
1337 = 7 * 191
	fi(1337) = 1337 * (1- 1/7)(1-1/191)

		=1337 * (6 * 190) / 1337
		 = 1140
a^b % 1337 
= (a^b % 1140)  % 1137
array = 4 3 3 8 5 2
2x10^0 %1440
+ 5x10^1 %1440 + 8x10^2 % 1440 + ..

we get b < 1440
*/