#include <bits/stdc++.h>

#define endl '\n'
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)

#define vi vector<int>
#define PB push_back
#define MP make_pair

#define pii pair<int,int>
#define X first
#define Y second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/**** FUNCTIONS ****/
bool cmp(pii a, pii b) {
    if(a.Y == b.Y)
        return a.X < b.X;
    else
        return a.Y < b.Y;
}
/*******************/

#define SUBMIT
int main() {
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif


    int N;
    cin >> N;

    vector<pii> vec(N);
    for(int i=0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        vec[i] = {x, y};
    }

    sort(vec.begin(), vec.end(), cmp);

    int idx = 0;
    int cnt = 1;
    for(int i = 1; i < vec.size(); ++i) {
        if(vec[i].X >= vec[idx].Y){
            idx = i;
            ++cnt;
        }
    }

    cout << cnt<< endl;

	return 0;
}
