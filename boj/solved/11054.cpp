#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N, answer;
int arr[1001];

int asc[1001];
int dsc[1001];

int solve(){
	asc[1]=1;
	dsc[N]=1;

	for(int i=2; i<=N; ++i){
		for(int j=i-1; j>0; --j){
			if(arr[j] < arr[i])
				asc[i] = max(asc[i], asc[j]);
		}
		asc[i]++;
	}

	for(int i=N-1; i>0; --i){
		for(int j=i+1; j<=N; ++j){
			if(arr[j] < arr[i])
				dsc[i] = max(dsc[i], dsc[j]);
		}
		dsc[i]++;
	}

	for(int i=1; i<=N; ++i) {
		answer=max(asc[i]+dsc[i]-1, answer);
	}

	return answer;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif
	cin >> N;
	for(int i=1; i<=N; ++i)
		cin >> arr[i];

	cout << solve() << endl;

	return 0;
}