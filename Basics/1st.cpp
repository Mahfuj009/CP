#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	char c;
	cin>>x>>c;
	cout<<(char)++x<<endl<<(int)c<<endl;
	cout<<3*7/2<<endl;

	//int char , long int , long long int , float, double

	//-10^9<int<10^9
	//-10^12<long int<<10^12
	//-10^18<long long int <10^18

	int a = 100000;
	int b = 100000;
	//long int p = a*b; //calculation occurs in higher range data type
	//before storing in long calculation will be in int
	long long int p = a*1LL*b; //calculation in long long int
	cout<<p<<endl;

	double r = 100000;
	double s = 100000;
	double t = r*s;
	cout<<fixed<<setprecision(0)<<t<<endl;
	//fixed for removing scientific , setprecision for no 0 after decimal

	double y = 1e24;
	cout<<fixed<<y<<endl; //precision error  in double and float

	for(int i=1;i<=10;cout<<i++<<endl){

	}

}