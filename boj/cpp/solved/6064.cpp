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
    int T; cin >> T;
    while (T--) {
        int m, n, x, y; cin >> m >> n >> x >> y;
        int lcm = m*n / __gcd(m, n);
        int answer;
        while (1) {
            if ( x > lcm || y > lcm ) {
                answer = -1;
                break;
            }

            if (x == y) {
                answer = x;
                break;
            }

            if (x < y) {
                x += m;
                continue;
            }

            if(y < x) {
                y += n;
                continue;
            }
        }
        cout << answer << endl;
    }

    return 0;
}

