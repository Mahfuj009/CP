#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void printBinary(int n){
	for(int i = 10; i >= 0; i--){
		cout <<( (n >> i) & 1);
	}
	cout << "\n";
}


int main(){
	for(int i = 0; i<8; ++i){
		printBinary(i);
		if(i & 1)
			cout << "odd" << "\n";
		else
			cout << "even" << "\n";
	}
	//odd or even using binary
	//all even numbers have 0 in 0th bit, and all odds have 1
	// and with 0000000000001


	//integer division 2
	int n = 5;
	cout << (n >> 1) << "\n";
	//multiply by two
	cout << (n << 1) << "\n";
	//these two operations are faster than ordinary division and multiplication


	//converting char to upper case or lower case using bit manipulation
	for(char c = 'A'; c<'E'; c++){
		cout << c <<"\n";
		printBinary(int(c));
	}
	for(char c = 'a'; c<'e'; c++){
		cout << c <<"\n";
		printBinary(int(c));
	}
	//upper case 5th bit not set but lower bit 5th bit is set
	//upper to lower
	char A = 'A';
	char a = A | (1 << 5);
	cout << a << "\n";

	//lower to upper
	char b = 'B';
	char B = b & (~(1<<5));
	cout << B << "\n";
	// cool
	cout << char(1<<5); // space print, value 32
	//to lower
	cout << char('C' | ' ') << endl; //converted to lower case
	//binary of _ underscore is basically the invert of space (~(1<<5)), first
			//few bits are zero in _ but all alphabets also have them 0 (252 limit)
	//to upper
	cout << char('b' & '_') << "\n";


	//unset from ith(4) bits to end
	//and with 1111110000 = ~(00000010000 -1) = ~ 0000001111 
	int x = 59;
	int i = 4;
	printBinary(x);
	x = x & (~((1<<(i+1))-1));
	printBinary(x); //0th to 4th bits cleared

	//clearing all msb till ith(3) bit
	x = 59;
	i = 3;
	// and with 000000111
	x = x &((1<<(i+1))-1);
	printBinary(x);

	//if a number is power of 2
	int y = 8; //any power of two has one 1 , y-1 has all 0 till that one if power of two
	if(y & (y-1)){
		cout << "not power of 2" << "\n";
	}
	else{
		cout << "power of 2" << "\n";
	}

	


}