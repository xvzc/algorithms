#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define ull unsigned long long
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)

using namespace std;
/**** VARIABLES ****/
int N, M, temp;
/*******************/

/**** FUNCTIONS ****/
void solve(unordered_map<int, int> &hmap, vector<int> &cards){
	for(unordered_map<int, int>::iterator iit = hmap.begin(); iit != hmap.end(); iit++){
		cout << iit->first << ": "<< iit->second << ' ';
	}
}
/*******************/

// #define SUBMIT
int main(){
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif

	unordered_map<int, int> hmap;
	unordered_map<int, int>::iterator it;
	cin >> N;
	for(int i=0; i < N; i++){
		cin >> temp;

		it =  hmap.find(temp);
		if(it == hmap.end())
			hmap.insert(make_pair(temp, 1));
		else
			it->second++;
	}

	cin >> M;
	vector<int> cards(M);
	for(int i=0; i < M; i++){
		cin >> cards[i];
	}

	solve(hmap, cards);

	return 0;
}