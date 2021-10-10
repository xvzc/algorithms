#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    int a, b, c; cin >> a >> b >> c;
    int x = 1, y = 1, z = 1;

    int i;
    for(i = 1; i <= 10000; ++i) {
        if( a == x && b == y && c == z )
            break;

        x = x % 15 + 1;
        y = y % 28 + 1;
        z = z % 19 + 1;
    }

    cout << i;

    return 0;
}

