#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
long long fast_exponent(long long base, long long x, long long mod) {
    long long res = 1;
    while (x) {
        if (x % 2 == 1) res = (res % mod * base % mod) % mod;
        x = x >> 1;
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

    int n, k; cin >> n >> k;
    // cout << n << k <<endl;
    int fact_n = 1;
    int fact_k = 1;
    int fact_nk = 1;

    for (int i = 1; i <= k; ++i) fact_k = ((ll)(fact_k % MOD) * (i % MOD)) % MOD;
    // cout << fact_k << endl;
    for (int i = 1; i <= n-k; ++i) fact_nk = ((ll)(fact_nk % MOD) * (i % MOD)) % MOD;
    // cout << fact_nk << endl;
    for (int i = 1; i <= n; ++i) fact_n = ((ll)(fact_n % MOD) * (i % MOD)) % MOD;
    // cout << fact_n << endl;

    int deno = (((ll)fact_nk % MOD) * (fact_k % MOD)) % MOD;
    int answer = (fast_exponent(deno, MOD - 2, MOD) % MOD) * ((ll)fact_n % MOD) % MOD;
    cout << answer << endl;

    return 0;
}

