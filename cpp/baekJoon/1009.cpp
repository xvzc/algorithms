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
/* Fast exponent in mod p */
int fast_exponent(int base, int x, int mod) {

    int res = 1;
    while (x) {

        // If y is odd, multiply x with result
        if (x % 2 == 1) res = (res % mod * base % mod) % mod;
             
        // y = y/2
        x = x >> 1;
         
        // Change x to x^2
        base = (base % mod * base % mod) % mod;
    }

    return res;
}

/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int T; cin >> T;
    while(T--) {
        int a, b; cin >> a >> b;
        int val = fast_exponent(a, b, 10);

        if(val == 0)
            val = 10;

        cout << val << endl;
    }

    return 0;
}

