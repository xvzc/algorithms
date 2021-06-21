#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
int N, weight_limit, weight, value;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	cin >> N >> weight_limit;

	int dp[weight_limit+1] = {};
	int cur_weight = 0;

	for(int i=1; i<=N; i++){
		cin >> weight >> value;

		for(int j=weight_limit; j>=weight; j--){
			cur_weight = dp[j-weight] + value;

			if( cur_weight > dp[j])
				dp[j] = cur_weight;

		}
	}

	cout << dp[weight_limit] << endl;

	return 0;
}