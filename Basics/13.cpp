#include<bits/stdc++.h>
using namespace std;


//sum of an array 0 to nth index
int sum(int n, int a[]){
	if(n<0){
		return 0;
	} 
	return sum(n-1,a) + a[n];
}
//Notice what each function returns

//digit sum
int dsum(int n){
	if(n==0){
		return 0;
	}
	return dsum(n/10) + n%10;
}

int main(){
	int a[6] = {1,2,3,4,5,6};
	cout<<sum(4,a)<<endl;
	cout<<dsum(4334)<<endl;

}