
#include<bits/stdc++.h>
using namespace std;

/*
GCD -> greatest common divisor
4,12 = 4
12,18 = 6

//GCD : take minimum power of both, gcd = 2^2 * 3^0 = 4
4 -> 2^2 * 3^0
12 -> 2^2 * 3^1
LCM = 2^2 * 3^1 = 12 , taking minimum power 

18 -> 2^1 * 3^2 
gcd = 2^2 * 3^0 = 4
lcm = 2^2 * 3^2 = 36

taking 12 and 18
multiplying both nums = 2^2 * 2 * 3 * 3^2 / (2*3)  = 36
then dividing by min power, we get the lcm

product / gcd = lcm 		//important

ex: 4 AND 12 
divide till remainder is 0 , remainder becomes divsor in each step and divisor 
becomes divident

4 |12 | 3
   12
  ----
   0

//12 and 18
12 | 18 | 1
	 12
	-----
	6 | 12 | 2
		12
		---
		 0

last divisor is the gcd
*/

int gcd(int a, int b){
	// a%b -> remainder
	if(b == 0) return a;
	return gcd(b, a%b);
}
//TC : logn

int main(){
	int gcd_val = gcd(18,12); // order doesn't matter
	cout << gcd_val << "\n";

	cout << gcd(4, 12) << "\n"; //auto in next step swapped so order doesn't matter

	//lcm
	cout << 12 * 18 / gcd(12,18) << "\n";

	//inbuit function for gcd 
	cout << __gcd(12,18) << "\n";
	//TC : logn

	//gcd of multiple numbers
	// a,b,c -> gcd ( gcd(a,b), c)
	// gcd of any number with 0 is that number

	//minimum fraction a/b = (a/gcd(a,b)) / (b/gcd(a,b))
} 