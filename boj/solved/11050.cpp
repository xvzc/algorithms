#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// global variables ****************
// *********************************

// functions ***********************
void solution() {}
// *********************************

#define submit
int main() {
	io_faster;

	#ifndef submit
	from_test_case;
	#endif

    vector<int> v(11);
    v[0]=1;

    for (int i = 1; i <= 10; ++i) v[i] = i*v[i-1];

    int x, y;
    cin >> x >> y;

    cout << v[x]/(v[y]*v[x-y]) << endl;

	solution();

    return 0;
}
