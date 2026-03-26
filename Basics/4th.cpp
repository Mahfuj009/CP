#include<bits/stdc++.h>
using namespace std;

int sum(int n){
		int digit_sum=0;
		while(n){
			digit_sum = digit_sum + n%10;
			n=n/10;
		}
		return digit_sum;
}

void increment(int &num){ //pass by reference
	num++;
}
/*void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}*/
int main(){
	int a,b;
	cin>>a>>b;
	cout<<sum(a)+sum(b)<<endl;
	//by reference
	increment(a);
	cout<<"incremented a :"<<a<<endl;

	swap(a,b);
	cout<<"After swap a:"<<a<<" b:"<<b<<endl;

	//arrays always pass by reference 1D = arr[]
	// passing 2d array  2D = arr[][x]; //x is must
	// to avoid finding x we usually declare the array globally
	const int N = 1e5;
	int array[N][N];
	//now no need to pass the array and can edit from anywhere

}