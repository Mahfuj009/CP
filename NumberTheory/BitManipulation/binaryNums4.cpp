//Bit - Masking

#include<bits/stdc++.h>
using namespace std;


	/*
	1.apple - 0
	2.orange - 1
	3.banana - 2
	4.litchi - 3
	
	persons
	1. 2,3
	2. 0,1,2
	3. 1,3

	common fruits between 2 persons?

	intersecton of two sets
	2 sorted array's intersection - O(n) - 2 pointer method


	in our way, not storing in array , instead using bits and storing number
	binary reprentation : 2,3  --> 1100  this is bit masking = 12
	0,1,2  --> 0111 = 7
	1,3  ----> 0101 = 10

	we can find the intersection just by taking and of the two numbers
	1100
	0111
	-----
	0100

	unsigned int - 32 bit
	unsigned long - 64 bit
	fruits over 64 fruits, we cant use bit masking 
	*/

	/*
	Problem: There are N <= 5000 workers. Each worker is availble during some days of 
	this month (which has 30 days). For each worker, you are given a set of numbers, 
	each from interval [1,30]. You need to assign important project to two wokers but 
	they will be able to work on the project only when they are both available. Find
	two workers that are best for the job 0 maximizie of days when both thede wokers 
	are available.

	input:
	n - number of workers
	b - number of days
	a - set of avialability
	*/



int main(){
	int n;
	cin >> n;
	vector<int>masks(n,0);
	for(int i = 0; i < n; i++){
		int num_workers;
		cin >> num_workers;
		int mask = 0;
		for(int j = 0; j < num_workers; j++){
			int day;
			cin >> day;
			mask = (mask | (1 << day));
		}
		masks[i] = mask;
	}
	int max_days = 0;
	int person1 = -1;
	int person2 = -1;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int interection = masks[i] & masks[j];
			int common_days = __builtin_popcount(interection);
			// cout<< i << " " << j <<" " << common_days << "\n";
			if(max_days < common_days){
				person1 = i;
				person2 = j;
			}
			max_days = max(max_days,common_days);
		}
	}
	cout <<person1 << " " << person2 << " " << max_days << "\n";
}
//O(N^2 * 30)

/*
INPUT :

5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7

OUTPUT:
0 2 4
*/
