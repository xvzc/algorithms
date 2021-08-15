#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// GLOBAL VARIABLES ****************
// *********************************

// FUNCTIONS ***********************
void solution(vector<int> b) {
}
// *********************************

//#define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    int n;
    cin >> n;

    vector<int> v(n);
    int temp;
    for(int i=0; i < n; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

	solution();

    return 0;
}
