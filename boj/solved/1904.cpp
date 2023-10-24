#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define MOD 15746

using namespace std;

int dp[1000001];
int N;

void make_dp(){
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3; i<=1000000; ++i){
		dp[i] = (dp[i-1] + dp[i-2])%MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif
	make_dp();

	cin >> N;
	cout << dp[N]<< endl;

	return 0;
}