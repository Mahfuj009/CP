#include<bits/stdc++.h>
using namespace std;
void printBinary(int num);

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	
	//64 32 16 8 4 2 1
	//can use this for conversation

	//and & or | xor ^ : and with 0 is 0, or is summation, xor odd 1 is 1

	//left shift
	//3<<2 : 11 -> 1100
	//6>>2 : 110 -> 1

	//int is 32 bit (4 byte)
	//2^4 numbers using 4 bit

	cout << INT_MAX << "\n";

	//power of 2
	// 1 << 0 : 1
	// 1 << 1 : 2
	// 1 << 2 : 4
	// 1 << 3 : 8

	//max int cal:

	int a = (1ll<<32) - 1; //2^32 has 33 bits so we cant store in int , so used ll
	cout << a << "\n"; //-1 output

	a = (1ll<<31) - 1;
	cout << a << "\n"; //max cause it is a sign int, 1 bit less so 31 bit (sign bit)
	// 0 positive , 1 negative sign bit

	unsigned int b = (1ll<<32) - 1;
	cout << b <<"\n";

	cout << "********* set bit and unset bit *********" << endl << endl;
	//********* set bit and unset bit *********//
	// 1 0 1 1 1 0 1 1
	// ^msb			 ^lsb

	// bit is set, bit = 1
	// bit is unset , bit = 0
	//set 6 bits above

	//ith bit set or not?
	// 5 -> 101
	//	    &010 //number that is only ith bit set, let's do &
	//		-----
	//		0 0 0

	// 1<<2 -> 00100 -1 = 00011
	// 1<<4 -> 10000 -1 = 01111

	printBinary(9);
	int m = 9;
	int i = 0;
	if((m & (1<<i)) != 0){
		cout << "set bit" << "\n"; //ith bit
	}
	else{
		cout << "Not set bit" << "\n";
	}

	//make a bit set
	printBinary( 9 | (1<<1));

	//unset a bit , 3rd bit of 9
	printBinary(~9); //inverse binary using tilda
	printBinary( ~(1 << 3)); // only 3rd bit unset
	printBinary( 9 & (~(1<<3))); //success

	//toggle the bit , 1->0 and 0->1
	//toggle 2nd bit of 9
	printBinary(9 ^ (1<<2)); // 2nd bit is now toggled (inverted)


	//count the set bit
	int p = 9;
	int ct = 0;
	for(int i = 31; i>=0; --i){
		if((p & (1<<i)) != 0){
			ct ++;
		}
	}
	cout << ct << "\n";

	//we can also use the printbinary function method instead of cout we use if
	//look in the function

	//inbuit function to count set bit
	printBinary(p);
	cout << __builtin_popcount(p) << "\n"; //only for int , not for long
	//for long long
	cout << __builtin_popcountll((1ll<<35)-1) << "\n";





}

void printBinary(int num){
	for(int i = 10; i >= 0; --i){
		cout << ((num >> i) & 1); //ith bit go to 0th position , then & with 1
		//if((num >> i) & 1) ct ++;
	}
	cout << "\n";
}