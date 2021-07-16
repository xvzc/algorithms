#include <iostream>
#include <vector>

using namespace std;

vector<int> stairs;
vector<int> dp;

int numOfStairs = 0; 

int main(){
	cin >> numOfStairs;

	stairs.assign(numOfStairs+1, 0);
	dp.assign(numOfStairs+1, 0);

	for(int i=1;i<=numOfStairs;i++) 
		cin >> stairs[i];

	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	
	for(int i=3; i<=numOfStairs; i++){
		dp[i] = max(dp[i-3]+stairs[i-1]+stairs[i], dp[i-2] + stairs[i]);
	}

	cout << dp[numOfStairs];
}

int max(int a, int b){
	return a>b?a:b;
}
