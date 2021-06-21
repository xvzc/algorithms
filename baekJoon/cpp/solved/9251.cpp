#include <bits/stdc++.h>
#include <limits>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

string word1; 
string word2;

void solve(vector<vector<int>> &vec){
	for(int i=1; i<vec.size(); ++i){
		for(int j=1; j<vec[i].size(); ++j){
			if(word1[i-1] == word2[j-1])
				vec[i][j] = vec[i-1][j-1] + 1;
			else
				vec[i][j] = max(vec[i-1][j], vec[i][j-1]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	cin >> word1 >> word2;

	vector<vector<int>> dp(word1.length()+1, vector<int>(word2.length()+1, 0));

	solve(dp);

	for(int i=0; i<dp.size(); i++){
		for(int j=0; j<dp[i].size(); ++j){
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
	cout << dp[word1.length()][word2.length()] << endl;

	return 0;
}