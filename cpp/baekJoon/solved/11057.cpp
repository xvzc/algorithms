#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int DP[1001][11];

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    int N; cin >> N;
    int mod = 10007;

    for(int i = 1; i <= 1000; ++i) {
        int sum = 1;
        DP[i][0] = 1;
        for(int j = 1; j <= 9; ++j) {
            DP[i][j] = ((DP[i-1][j] % mod) + (DP[i][j-1] % mod)) % mod;
            sum = ((sum % mod) + (DP[i][j] % mod)) % mod;
        }
        DP[i][10] = sum;
    }

    cout << DP[N][10] << endl;
    return 0;
}

