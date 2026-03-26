#include<bits/stdc++.h>
using namespace std;

int main(){

	string str = "Hello";
	string str2 = "World";
	string result = str + str2;
	cout<<result<<endl; //support + and =><only
	if(str2 ==str){
		cout<<str2<<endl;
	}
	else{
		cout<<str<<endl;
	}
	cout<<str[0]<<endl;

	str[0] = 'X'; //must be single quote 'cause character
	cout<<str<<endl;

	for(int i=0;i<str.size();++i){
		cout<<str[i]<<" ";
	}
	cout<<endl;

	string str3,str4;
	getline(cin,str3); //cin take input till space and new line but getline ignores space
	getline(cin,str4);

	int t; cin>>t; 
	cin.ignore(); //cin cursour goes to the next line
	while(t--){		// extra line appers because after 3 there are spaces
		string s;
		getline(cin, s);
		cout<<s<<endl;
	}

	string str5;
	cin>>str5;
	string str_rev;
	for(int i = str5.size()-1;i>=0;--i){
		str_rev = str_rev + str5[i];
	}
	cout<<str_rev<<endl;
 	//avoid this method because of time complexity

	string str6;
	cin>>str6;
	string str6_rev;
	for(int i = str6.size()-1;i>=0;i--){
		str6_rev.push_back(str6[i]);
	}
cout<<str6_rev<<endl;

cout<<"Palindrome or Not"<<endl;
string pal,pal_rev;
cin>>pal;
for(int i=pal.size()-1;i>=0;i--){
	pal_rev.push_back(pal[i]);
}
if(pal == pal_rev){
	cout<<"Palindrome : Yes"<<endl;
}
else{
	cout<<"Not Palindrome"<<endl;
}

//if a number is too big like 10^100 we can not use double : precision error
// we can not also use long because of range
//so we use string
string num;
cin>>num;
cout<<"last value as char :";
cout<<num[num.size()-1]<<endl; //last digit as char

//if we use typecasting
int l = (int)num[num.size()-1];
cout<<"ASCII value by typecasting: "<<l<<endl;

//to get the last char as integer
int last = num[num.size()-1] -'0';
cout<<"last digit as int: "<<last<<endl;


}