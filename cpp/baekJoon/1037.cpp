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
/*********************************/

/*********** FUNCTIONS ***********/
int solution(vector<int> &v) {
    for(auto k : v)
        cout << k << ' ';
    cout << endl;

    if(v.front() < 0 || v.back() < 0)
        return -1*v.front()*v.back();
    else
        return v.front()*v.back();
}
/*********************************/

// #define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    int n;
    vi v;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << solution(v) << endl;

	return 0;
}

