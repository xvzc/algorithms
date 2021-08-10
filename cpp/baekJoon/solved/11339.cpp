#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)
#define endl '\n'

#define vi vector<int>
#define PB push_back

#define pii pair<int,int>
#define MP make_pair
#define X first
#define Y second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/***********  GLOBALS  ***********/
int N;
/*********************************/

/*********** FUNCTIONS ***********/
bool cmp(pii a, pii b) {
    return a.Y < b.Y;
}
int solution(vector<pii> &vec) {
    sort(vec.begin(), vec.end(), cmp);

    int sum = 0;
    int w = N;
    for(auto p : vec)
        sum += p.Y*(w--);

    return sum;
}
/*********************************/

#define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    cin >> N;
    vector<pii> vec(N);

    for(int i=0; i < N; ++i) {
        vec[i].X = i;
        cin >> vec[i].Y;
    }

	cout << solution(vec) << endl;

	return 0;
}
