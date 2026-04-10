//People often mistake using set in the place of multiset
/*
problem:
N bags of candies are stumbled on the ground. Monk eats one bag and drop
the empty bag magically inside the bag candies increases. Say it had [x]
candies befor then now it has [x/2] candies. where [x] is the greatest
integer less than x. Now monk has k minute, in each minute he can eat
a single bag of candies. You have to find the maximum number of 
candies he can eat.

Input:
t -> test cases
N -> number of  bags , K-> minutes he got
N integes -> candies in each bag <= 10e10
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		multiset<long long> s;
		for(int i=1; i<=n;i++){
			long long x; cin>>x;
			s.insert(x);
		}

		long long total =0;
		for(int i=1;i<=k;i++){
			auto last = --s.end();
			total += *last;
			s.erase(last);
			s.insert(*last/2);
		}
		cout<<total<<endl;
		s.clear();
	}
}

/*
Input:
1
5 3
2 1 7 4 2

ans : 14
*/