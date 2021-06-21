#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
int x, y, N;

bool pairs_compare(pair<int, int> x, pair<int,int> y){
	return x.first < y.first;
}

int solve(vector<pair<int, int>> &vec) {
	vector<int> LIS(N);
	LIS[0] = 1;

	for(int i=1; i<N; i++){
		LIS[i]=1;
		for(int j=i-1; j>=0; j--){
			if(vec[j].second < vec[i].second)
				LIS[i] = max(LIS[i], LIS[j]+1);
		}
	}

	int LIN=0;

	return N - *max_element(LIS.begin(), LIS.end());
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	cin >> N;
	vector<pair<int, int>> pairs;

	for(int i=0; i< N; ++i){
		cin >> x >> y;
		pairs.push_back(make_pair(x,y));
	}

	sort(pairs.begin(), pairs.end(), pairs_compare);

	cout << solve(pairs) << endl;
	return 0;
}