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
    int n = 5;
    vector<int> v(n);
    while(n--) cin >> v[n];

    int _min = 2e9;
    for(int i = 0; i < 5; ++i) {
        for(int j = i + 1; j < 5; ++j) {
            for(int k = j + 1; k < 5; ++k) {
                int gcd, lcm;

                gcd = __gcd(v[i], v[j]);
                lcm = v[i] * v[j] / gcd;

                gcd = __gcd(lcm, v[k]);
                lcm = lcm * v[k] / gcd;

                _min = min(_min, lcm);
            }
        }
    }

    cout << _min;

    return 0;
}

