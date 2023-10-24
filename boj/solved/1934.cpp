#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
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

/*********************************/

// #define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    int n, x, y;
    cin >> n;

    while(n--) {
        cin >> x >> y;
        cout << gcd(x, y) << endl;
    }

	return 0;
}

