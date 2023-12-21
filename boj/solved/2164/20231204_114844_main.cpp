#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;
queue<int> q;

void solve(){
	for(int i=1; i<=N; i++)
		q.push(i);

	while(q.size() > 1){
		q.pop();
		q.push(q.front());
		q.pop();
	}
	
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif
	cin >> N;

	solve();

	cout << q.front() << endl;

	return 0;
}