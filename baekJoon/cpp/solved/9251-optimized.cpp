#include <bits/stdc++.h>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

string word1; 
string word2;

int solve(vector<vector<int>> &vec){
	int select=1;
	for(int i=1; i<=word1.length(); ++i) {
		for(int j=1; j<=word2.length(); ++j) {
			if(word1[i-1] == word2[j-1])
				vec[select][j]=vec[select^1][j-1]+1;
			else
				vec[select][j]=max(vec[select^1][j], vec[select][j-1]);
		}

		select=select^1;
	}

	return select^1;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	cin >> word1 >> word2;

	vector<vector<int>> LCS(2, vector<int>(word2.length()+1, 0));

	int select = solve(LCS);

	cout << LCS[select][word2.length()] << endl;

	return 0;
}