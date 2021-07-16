#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
struct stuff {
	int weight, value;
};

struct stuff stuffs[101];
int dp[101][100001];
int N, weight_limit, weight, value;

void solve(){
	for(int i=1; i<=N; i++){
		for(int j=0; j<=weight_limit; j++){
			if(stuffs[i].weight > j)
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = max(dp[i-1][j-stuffs[i].weight] + stuffs[i].value, dp[i-1][j]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	cin >> N >> weight_limit;

	for(int i=1; i<=N; i++){
		cin >> weight >> value;

		stuffs[i].weight = weight;
		stuffs[i].value  = value;
	}

	// for(int i=0; i<=N; ++i){
	// 	cout << stuffs[i].weight << ' ' << stuffs[i].value << endl;
	// }


	solve();
	for(int i=0; i<=N; ++i){
		for(int j=0; j<=weight_limit; j++){
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
	cout << dp[N][weight_limit] << endl;
	return 0;
}